/*
 * SPDX-License-Identifier: Apache-2.0
 */

/* file is auto-generated, do not modify ! */

#include <toolchain.h>

GEN_ABS_SYM_BEGIN (_ConfigAbsSyms)

GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MAIN_STACK_SIZE, 10240);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FPROTECT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NORDIC_QSPI_NOR, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NORDIC_QSPI_NOR_FLASH_LAYOUT_PAGE_SIZE, 4096);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NORDIC_QSPI_NOR_STACK_WRITE_BUFFER_SIZE, 16);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_MAX_IMG_SECTORS, 256);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_UPDATEABLE_IMAGE_NUMBER, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_PARTITION_SIZE_MCUBOOT_SCRATCH, 0x1e000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_PARTITION_SIZE_MCUBOOT_PAD, 0x200);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_PARTITION_SIZE_MCUBOOT, 0xc000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_USE_NRF_CC310_BL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MCUBOOT_NRF_CLEANUP_PERIPHERAL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_SIGNATURE_KEY_FILE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_ERASE_PROGRESSIVELY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MCUBOOT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_USE_CC310, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFXLIB_CRYPTO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_CC310_BL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_SIGNATURE_TYPE_ECDSA_P256, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_ECDSA_CC310, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MBEDTLS_CFG_FILE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_VALIDATE_SLOT0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_SWAP_USING_MOVE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_FIH_PROFILE_OFF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_USB_DFU_NO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_TRY_MASS_ERASE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_WATCHDOG_FEED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MCUBOOT_DEVICE_SETTINGS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_USB_DEVICE_PRODUCT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LV_Z_POINTER_KSCAN_DEV_NAME, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NET_CONFIG_IEEE802154_DEV_NAME, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOARD, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_SERIES, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NUM_IRQS, 48);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC, 32768);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL_INIT_PRIORITY, 30);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_SIZE, 1024);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_BASE_ADDRESS, 0x0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PINCTRL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HEAP_MEM_POOL_SIZE, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ROM_START_OFFSET, 0x0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_HAS_TIMING_FUNCTIONS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_RTC_TIMER, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_CLOCK_TICKS_PER_SEC, 32768);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BUILD_OUTPUT_HEX, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_TEST_EXTRA_STACK_SIZE, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MP_NUM_CPUS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NUM_METAIRQ_PRIORITIES, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE, 1024);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_WARN_EXPERIMENTAL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PRIVILEGED_STACK_SIZE, 1024);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_INIT_ARCH_HW_AT_BOOT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NCS_MCUBOOT_IN_BUILD, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_PARTITION_SIZE_PROVISION, 0x1000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_PARTITION_SIZE_B0_IMAGE, 0x8000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATION_INFO_MAGIC, 0x86518483);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATION_POINTER_MAGIC, 0x6919b47e);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATION_INFO_CRYPTO_ID, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATION_INFO_VERSION, 2);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATION_METADATA_OFFSET, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SB_VALIDATE_FW_SIGNATURE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_CLOUD_CLIENT_ID_SRC_COMPILE_TIME, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_CLOUD_CLIENT_ID, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPSL_THREAD_COOP_PRIO, 8);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPSL_WORK_STACK_SIZE, 1024);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPSL_TIMESLOT_SESSION_COUNT, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PARTITION_MANAGER_ENABLED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_MAP_CUSTOM, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SRAM_SIZE, 256);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SRAM_BASE_ADDRESS, 0x20000000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_EXTERNAL_FLASH_BASE, 0x0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_EXTERNAL_FLASH_MCUBOOT_SECONDARY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_SRAM_BASE, 0x20000000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PM_SRAM_SIZE, 0x40000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_ACL_FLASH_REGION_SIZE, 0x1000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FPROTECT_BLOCK_SIZE, 0x1000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FPROTECT_ENABLE_NO_ACCESS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FPROTECT_ENABLE_IS_PROTECTED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HW_UNIQUE_KEY_PARTITION_SIZE, 0x1000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HW_CC3XX, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZTEST_MULTICORE_DEFAULT_SETTINGS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_NRF_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SIGN_IMAGES, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_DT_FLASH_WRITE_BLOCK_SIZE, 4);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MCUBOOT_USB_SUPPORT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_MCUBOOT_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_MBEDTLS_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MBEDTLS_BUILTIN, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_TRUSTED_FIRMWARE_M_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_CJSON_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_ZCBOR_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_MEMFAULT_FIRMWARE_SDK_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_CANOPENNODE_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_CHRE_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_HAL_NORDIC_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_NORDIC_DRIVERS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_NRFX, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_CLOCK, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_CLOCK_LFXO_TWO_STAGE_ENABLED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_NVMC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_QSPI, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_WDT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRFX_WDT0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_LIBLC3CODEC_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_LITTLEFS_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_LORAMAC_NODE_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LV_Z_POINTER_KSCAN_MSGQ_COUNT, 10);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_LVGL_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_LZ4_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_NANOPB_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_TRACERECORDER_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_ZSCILIB_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_MODEM_SHMEM_CTRL_SIZE, 0x4e8);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CRYPTOCELL_CC310_USABLE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CRYPTOCELL_USABLE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_CC3XX_PLATFORM, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CC3XX_MUTEX_LOCK, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_802154_SOURCE_NRFXLIB, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_NRFXLIB_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ZEPHYR_CONNECTEDHOMEIP_MODULE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_CMSIS_CORE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_CMSIS_CORE_M, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MCUBOOT_BOOTUTIL_LIB, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOARD_REVISION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOARD_NRF52840DK_NRF52840, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOARD_ENABLE_DCDC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOARD_ENABLE_DCDC_HV, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_SERIES_NRF52X, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_HAS_ARM_MPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_SWO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_FAMILY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_FAMILY_NRF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_ACL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_CC310, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_CCM, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_CCM_LFLEN_8BIT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_CLOCK, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_ECB, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU3, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU4, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_EGU5, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_GPIO0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_GPIO1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_GPIOTE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_NVMC_PE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_POWER, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_PPI, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_PWM0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_QSPI, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RADIO_BLE_2M, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RADIO_BLE_CODED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RADIO_IEEE802154, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RADIO_TX_PWR_HIGH, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RNG, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RTC0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RTC1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_RTC2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SAADC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SPI1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SPIM3, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI3, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI4, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_SWI5, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TEMP, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TIMER0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TIMER1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TIMER2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TIMER3, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TIMER4, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_TWI0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_UARTE0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_UARTE1, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_USBD, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_HW_NRF_WDT0, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_HW_RTC1_RESERVED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_NRF52840, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_NRF52840_QIAA, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_DCDC_NRF52X, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_DCDC_NRF52X_HV, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GPIO_AS_PINRESET, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_SOC_SECURE_SUPPORTED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NRF_APPROTECT_USE_UICR, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_COMPATIBLE_NRF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_COMPATIBLE_NRF52X, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ISA_THUMB2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ASSEMBLER_ISA_THUMB2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_COMPILER_ISA_THUMB2, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_STACK_ALIGN_DOUBLE_WORD, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PLATFORM_SPECIFIC_INIT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FAULT_DUMP, 2);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARM_STACK_PROTECTION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FP_HARDABI, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FP16, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FP16_IEEE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M4, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M_HAS_SYSTICK, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M_HAS_DWT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M_HAS_BASEPRI, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M_HAS_VTOR, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARMV7_M_ARMV8_M_MAINLINE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARMV7_M_ARMV8_M_FP, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GEN_ISR_TABLES, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GEN_IRQ_VECTOR_TABLE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARM_MPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE, 32);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPU_STACK_GUARD, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPU_ALLOW_FLASH_WRITE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE, 32);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARM, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_IS_SET, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HW_STACK_PROTECTION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KOBJECT_TEXT_AREA, 256);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT, 100);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES, 16);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GEN_PRIV_STACKS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GEN_SW_ISR_TABLE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_SW_ISR_TABLE_ALIGN, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_GEN_IRQ_START_VECTOR, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_TIMING_FUNCTIONS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_STACK_PROTECTION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_USERSPACE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_RAMFUNC_SUPPORT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_SUPPORTS_COREDUMP, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_THREAD_ABORT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_HAS_FPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CPU_HAS_MPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPU, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SRAM_REGION_PERMISSIONS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NUM_COOP_PRIORITIES, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NUM_PREEMPT_PRIORITIES, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MAIN_THREAD_PRIORITY, -2);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_COOP_ENABLED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PRIORITY_CEILING, -127);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_IDLE_STACK_SIZE, 320);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ISR_STACK_SIZE, 2048);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_THREAD_STACK_INFO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ERRNO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SCHED_DUMB, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_WAITQ_DUMB, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BOOT_DELAY, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYSTEM_WORKQUEUE_PRIORITY, -2);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ATOMIC_OPERATIONS_BUILTIN, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NUM_MBOX_ASYNC_MSGS, 10);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_MEM_POOL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SWAP_NONATOMIC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_CLOCK_EXISTS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS, 365);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_XIP, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_INIT_PRIORITY_OBJECTS, 30);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_INIT_PRIORITY_DEFAULT, 40);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_INIT_PRIORITY_DEVICE, 50);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_APPLICATION_INIT_PRIORITY, 90);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_DTS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_SEGGER_RTT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_INTC_INIT_PRIORITY, 40);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYSTEM_CLOCK_INIT_PRIORITY, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_TICKLESS_CAPABLE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_RISCV_MACHINE_TIMER_SYSTEM_CLOCK_DIVIDER, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL_NRF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CLOCK_CONTROL_NRF_ACCURACY, 50);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_HAS_DRIVER_ENABLED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_HAS_PAGE_LAYOUT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_JESD216, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_PAGE_LAYOUT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_INIT_PRIORITY, 50);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_FLASH_NRF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SOC_FLASH_NRF_RADIO_SYNC_NONE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_NORDIC_QSPI_NOR_INIT_PRIORITY, 80);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PINCTRL_STORE_REG, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PINCTRL_NRF, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PINCTRL_STM32_REMAP_INIT_PRIORITY, 2);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SUPPORT_MINIMAL_LIBC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_NEWLIB_LIBC_NANO, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC_MALLOC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC_MALLOC_ARENA_SIZE, 0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC_CALLOC, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC_REALLOCARRAY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MINIMAL_LIBC_OPTIMIZE_STRING_FOR_SIZE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CBPRINTF_COMPLETE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CBPRINTF_FULL_INTEGRAL, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CBPRINTF_FP_SUPPORT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_CBPRINTF_N_SPECIFIER, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_HEAP_ALLOC_LOOPS, 3);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SYS_HEAP_SMALL_ONLY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_POSIX_MAX_FDS, 4);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_MAX_TIMER_COUNT, 5);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_PRINTK, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_ASSERT_VERBOSE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_MAP, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_TOOLCHAIN_ZEPHYR_0_14, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LINKER_ORPHAN_SECTION_WARN, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_HAS_FLASH_LOAD_OFFSET, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_USE_DT_CODE_PARTITION, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_LOAD_OFFSET, 0x0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_FLASH_LOAD_SIZE, 0xc000);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LD_LINKER_SCRIPT_SUPPORTED, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LD_LINKER_TEMPLATE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_ENTRY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LINKER_SORT_BY_ALIGNMENT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SRAM_OFFSET, 0x0);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_SIZE_OPTIMIZATIONS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_COMPILER_COLOR_DIAGNOSTICS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_COMPILER_OPT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_RUNTIME_ERROR_CHECKS, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_KERNEL_BIN_NAME, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_OUTPUT_STAT, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_OUTPUT_DISASSEMBLY, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_OUTPUT_PRINT_MEMORY_USAGE, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BUILD_OUTPUT_BIN, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_BUILD_OUTPUT_META, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_COMPAT_INCLUDES, 1);
GEN_ABSOLUTE_SYM_KCONFIG(CONFIG_LEGACY_INCLUDE_PATH, 1);

GEN_ABS_SYM_END
