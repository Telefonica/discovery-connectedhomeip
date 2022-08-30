#include <device.h>
#include <toolchain.h>

/* 1 : /soc/clock@40000000:
 * Direct Dependencies:
 *   - (/soc)
 *   - (/soc/interrupt-controller@e000e100)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_clock_40000000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/flash-controller@4001e000:
 * Direct Dependencies:
 *   - (/soc)
 * Supported:
 *   - (/soc/flash-controller@4001e000/flash@0)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_flash_controller_4001e000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 3 : /soc/qspi@40029000/mx25r6435f@0:
 * Direct Dependencies:
 *   - (/soc/qspi@40029000)
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_qspi_40029000_S_mx25r6435f_0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
