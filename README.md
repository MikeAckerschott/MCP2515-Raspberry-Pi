# MCP2515 Raspberry Pi Integration

This project is an adaptation of the [MCP2515 Arduino library](https://github.com/autowp/arduino-mcp2515), modified to replace the SPI dependency with the [bcm2835 library](https://www.airspayce.com/mikem/bcm2835/), enabling compatibility with Raspberry Pi.

## Installation

To install the required library globally on your device, execute the `install_bcm2835.sh` script. If the script does not work, please follow the [installation instructions from the source](https://www.airspayce.com/mikem/bcm2835/).

## Build Instructions

To build the project, follow these steps:

1. Navigate to the build directory:
    ```sh
    cd ./MCP2515-Raspberry-Pi/build/
    ```

2. Generate the build files using CMake:
    ```sh
    cmake ../
    ```

3. Compile the project using make:
    ```sh
    make -j4
    ```

4. Run the executable that reads data on the CAN-network:
    ```sh
    ./mcp2515
    ```

## Additional Examples

For additional examples, please take a look at the [examples directory](https://github.com/autowp/arduino-mcp2515/tree/master/examples) of the arduino library for the mcp2515.