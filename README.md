# I2C Extra Channel


## Overview

This library extends the standard I2C library to allow an extra channel to be used on
supported devices e.g. ESP32 (hardware driver) or GPIO (software driver).

Usage:

```
load('api_i2c_ext.js');

let i2c_bus2 = I2C_EXT.get();

let id = I2C.readRegB(i2c_bus2, 0x39, 0x80 | 0x12);

```
