# hal
Hardware Abstraction Layer

The purpose of this repository is to create a hardware abstraction layer in a controlled way.

In this version code is split into separate files:
- main.c containing business logic only using the instance named io.
- mcp23017.c containing the driver.
- io_hal.h interface defining the methods it shall provide.
- config.h connecting the mcp23017 driver to an instance of type hal_io_t named io.

Next step: Apply a project structure and use variables in the Makefile.
