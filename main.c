#include <stdio.h>

/****************************************************************************
 * Interface
 *
 *
 ****************************************************************************/

typedef struct
{
    void (*write) (int const port, int const pin, int const state);
} hal_io_t;

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
void mcp23017_write(int port, int pin, int state)
{
    printf("Port: %d, Pin: %d, State: %d\n", port, pin, state);
}

/****************************************************************************
 * Connect interface to driver
 *
 *
 ****************************************************************************/
hal_io_t io =
{
    .write = mcp23017_write
};

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
    io.write(0, 3, 1);

    return 0;
}
