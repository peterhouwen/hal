#pragma once

#include <stdio.h>
#include "io_hal.h"
#include "mcp23017.h"

/****************************************************************************
 * Connect interface to driver
 *
 *
 ****************************************************************************/
hal_io_t io =
{
    .write = mcp23017_write
};


