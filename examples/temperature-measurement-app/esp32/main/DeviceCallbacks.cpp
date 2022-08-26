/*
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 * @file DeviceCallbacks.cpp
 *
 * Implements all the callbacks to the application from the CHIP Stack
 *
 **/
#include "DeviceCallbacks.h"

#include "esp_check.h"
#include "esp_err.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "route_hook/esp_route_hook.h"
#include <app-common/zap-generated/attribute-id.h>
#include <app-common/zap-generated/cluster-id.h>
#include <app/server/Dnssd.h>
#include <lib/support/CodeUtils.h>
#include "driver/temperature_sensor.h"

#include <app-common/zap-generated/attributes/Accessors.h>

static const char * TAG = "echo-devicecallbacks";

using namespace ::chip;
using namespace ::chip::Inet;
using namespace ::chip::System;

void AppDeviceCallbacks::PostAttributeChangeCallback(EndpointId endpointId, ClusterId clusterId, AttributeId attributeId,
                                                     uint8_t type, uint16_t size, uint8_t * value)
{
    ESP_LOGI(TAG, "PostAttributeChangeCallback - Cluster ID: '0x%04x', EndPoint ID: '0x%02x', Attribute ID: '0x%04x'", clusterId,
             endpointId, attributeId);

    // TODO handle this callback in switch statement
    ESP_LOGI(TAG, "Unhandled cluster ID: %d", clusterId);

    ESP_LOGI(TAG, "Current free heap: %d\n", heap_caps_get_free_size(MALLOC_CAP_8BIT));
}

void TemperatureMeasurementAttributeReadAccessCallback(EndpointId endpoint, ClusterId clusterId, AttributeId attributeId)
{
    float tsens_out;

    // Verify attribute and endpoint
    VerifyOrReturn(attributeId == TemperatureMeasurement::Attributes::MeasuredValue::Id);
    VerifyOrReturn(endpoint == 1);

    // Read temperature from HW
    if (temperature_sensor_get_celsius(temp_handle, &tsens_out) != ESP_OK)
    {
        ESP_LOGE(TAG, "Error reading temperature");
        return;
    }

    // Update attribute
    TemperatureMeasurement::Attributes::MeasuredValue::Set(1, static_cast<int16_t>(tsens_out * 100));
    ESP_LOGI(TAG, "Temperature out celsius %.02f", tsens_out);
}

bool emberAfAttributeReadAccessCallback(EndpointId endpoint, ClusterId clusterId, AttributeId attributeId)
{
    ESP_LOGI(TAG, "emberAfAttributeReadAccessCallback - Cluster ID: '0x%04x', EndPoint ID: '0x%02x', Attribute ID: '0x%04x'", clusterId,
             endpoint, attributeId);
             
    switch (clusterId)
    {
    case TemperatureMeasurement::Id:
        TemperatureMeasurementAttributeReadAccessCallback(endpoint, clusterId, attributeId);
        break;

    default:
        break;
    }

    return true;
}
