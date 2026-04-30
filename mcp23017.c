#include <stdio.h>

void mcp23017_write(int port, int pin, int state)
{
    printf("Port: %d, Pin: %d, State: %d\n", port, pin, state);
}
