# hal
Hardware Abstraction Layer

The purpose of this repository is to create a hardware abstraction layer in a controlled way.

In this version code is split into separate files:
- main.c containing business logic only using the instance named io.
- mcp23017.c containing the driver.
- io_hal.c interface defining the methods it shall provide.

Next step: Apply a project structure and use variables in the Makefile.
