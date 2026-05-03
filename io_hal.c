/** @file io_hal.c
 *  @brief Mapping the HAL to a driver
 */

/****************************************************************************
 * Includes
 ****************************************************************************/
#include "io_hal.h"
#include "mcp23017.h"

/****************************************************************************
 * Map the HAL to driver
 ****************************************************************************/
hal_io_t io =
{
    .read = mcp23017_read,
    .write = mcp23017_write
};

/************************************************************************
 * Function : get_io()
 *
 * \b Description:
 *
 * This function is used to return a pointer to the hal_io_t object io.
 *
 * PRE-CONDITION: <br>
 * PRE-CONDITION:
 *
 * POST-CONDITION:
 *
 * @param
 *
 * @return         pointer to io
 *
 * \b Example:
 * @code
 *   get_io();    // Set the PORT1_0 pin low
 * @endcode
 *
 * @see mcp23017_init
 * @see mcp23017_channel_read
 * @see mcp23017_channel_write
 * @see mcp23017_channel_toggle
 * @see mcp23017_register_write
 * @see mcp23017_register_read
 * @see mcp23017_callback_register
 *
 ***********************************************************************/
hal_io_t * get_io()
{
    return &io;
}
