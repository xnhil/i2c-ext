let I2C_EXT = {
  // ## **`I2C_EXT.get()`**
  // Get I2C extended bus handle (for use by I2C API). Return value: opaque pointer.
  get: ffi('void *mgos_i2c_ext_get_global(void)'),
  get_default: ffi('void *mgos_i2c_ext_get_global(void)'),  // deprecated
};
