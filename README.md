# data-packaging
Functions to package variables into a bitstream for transmission over a serial interface
This is a library for EV.Two, the FSAE Electric vehicle by NU Racing and the University of Newcastle.

## Usage
Clone this repo into your (Arduino) project and include with:

``` c++
#include "data-packaging/data-packaging.h"
```

Pack a variable into a buffer array with:

``` c++
float pi = 3.14159;
int nums = 123456;
uint8_t buffer[8];

// Pack the variables for transmission
packFloat(pi, buffer, 0); // Pack a float variable into the buffer, starting at the 0th byte
packInt(nums, buffer, 4); // Pack a int variable into the buffer, starting at the 4th byte


// Transmit the buffer as you like
// Receive the data

// Unpack the binary data into variables
int a = unPackInt(buffer, 4);
float b = unPackFloat(buffer, 0);

```
