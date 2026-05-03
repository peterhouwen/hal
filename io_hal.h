/** @file io_hal.h
 *  @brief The interface definition for the io-expander
 *
 *  This is the header file for the definition of the interface for a
 *  io-expander.
 */
#pragma once

/****************************************************************************
 * Typedefs
 ****************************************************************************/
typedef struct
{
    void (*read) (int const port, int const pin, int * const state);
    void (*write) (int const port, int const pin, int const state);
} hal_io_t;

/****************************************************************************
 * Function prototypes
 ****************************************************************************/
hal_io_t * get_io();

/***End of File**************************************************************/
