#pragma once

/****************************************************************************
 * Function: mcp23017_write()
 * \b Description
 *
 * This function is used to write the state of a channel (pin) as either
 * logic high or low
 *
 * PRE-CONDITION: The channel is configured as output
 *
 * POST-CONDITION: The channel state will be state
 *
 * @param   port
 * @param   pin
 * @param   state
 *
 * @return  void
 *
 * \b Example:
 * @code
 *   mcp23017_write(0, 3, 1);  // Set the port 0, pin 3 high
 *   mcp23017_write(0, 3, 0);  // Set the port 0, pin 3 low
 * @endcode
 ****************************************************************************/
void mcp23017_write(int port, int pin, int state);
