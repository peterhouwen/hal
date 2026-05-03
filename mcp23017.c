/** @file mcp23017.c
 *  @brief The implementation for the io-expander
 */

/****************************************************************************
 * Includes
 ****************************************************************************/
#include <stdio.h>

/****************************************************************************
 * Variables
 ****************************************************************************/


/************************************************************************
 * Function : mcp23017_read()
 *
 * \b Description:
 *
 * This function is used to read the state of a channel (pin) as either
 * logic high or low through the use of io_exp_channel_t enum to select
 * the channel and the io_exp_pin_state_t to define the desired state.
 *
 * PRE-CONDITION: The channel is configured as INPUT <br>
 * PRE-CONDITION: The channel is configured as GPIO <br>
 * PRE-CONDITION: The channel is within the maximum io_exp_channel_t
 * definition
 *
 * POST-CONDITION: The channel state will be state.
 *
 * @param          Channel is the pin to read using the io_exp_channel_t
 *                 enum definition
 * @param          State is HIGH or LOW as defined in the
 *                 Io_exp_pin_state_t enum
 *
 * @return         void
 *
 * \b Example:
 * @code
 *   mcp23017_read(PORT1_0, LOW);    // Set the PORT1_0 pin low
 *   mcp23017_read(PORT1_0, HIGH);   // Set the PORT1_0 pin high
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

void mcp23017_read(int port, int pin, int * state)
{
    *state = 1;
    printf("mcp23017 read: Port: %d, Pin: %d, State: %d\n", port, pin, *state);
}
/************************************************************************
 * Function : mcp23017_write()
 *
 * \b Description:
 *
 * This function is used to write the state of a channel (pin) as either
 * logic high or low through the use of io_exp_channel_t enum to select
 * the channel and the io_exp_pin_state_t to define the desired state.
 *
 * PRE-CONDITION: The channel is configured as OUTPUT <br>
 * PRE-CONDITION: The channel is configured as GPIO <br>
 * PRE-CONDITION: The channel is within the maximum io_exp_channel_t
 * definition
 *
 * POST-CONDITION: The channel state will be state.
 *
 * @param          Channel is the pin to write using the io_exp_channel_t
 *                 enum definition
 * @param          State is HIGH or LOW as defined in the
 *                 Io_exp_pin_state_t enum
 *
 * @return         void
 *
 * \b Example:
 * @code
 *   mcp23017_write(PORT1_0, LOW);    // Set the PORT1_0 pin low
 *   mcp23017_write(PORT1_0, HIGH);   // Set the PORT1_0 pin high
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
void mcp23017_write(int port, int pin, int state)
{
    printf("mcp23017 write: Port: %d, Pin: %d, State: %d\n", port, pin, state);
}

