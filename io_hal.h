#pragma once

/****************************************************************************
 * Interface
 *
 *
 ****************************************************************************/
typedef struct
{
    void (*write) (int const port, int const pin, int const state);
} hal_io_t;
