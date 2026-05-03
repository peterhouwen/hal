/** @file mcp23017.h
 *  @brief The interface definition for the io-expander
 *
 *  This is the header file for the definition of the interface for a
 *  io-expander.
 */
#pragma once

/****************************************************************************
 * Function prototypes
 ****************************************************************************/
void mcp23017_read(int port, int pin, int * state);
void mcp23017_write(int port, int pin, int state);

/***End of File**************************************************************/
