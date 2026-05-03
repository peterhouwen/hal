#include <stdio.h>
#include "io_hal.h"

/*****************************************************************************
 * Function: main()
 *
 * \b Description
 *
 * Main function
 *
 ****************************************************************************/
int main(int argc, char* argv[])
{
    hal_io_t * io = get_io();

    int state = 0;

    io->write(0, 3, 1);
    io->read(0, 4, &state);
    printf("main: state of pin 4: %d\n", state);

    return 0;
}
