let I2C_EXT = {
  _int: ffi('bool mgos_i2c_ext_init(void)'),

  // ## **`I2CEXTRA.get()`**
  // Get secondary I2C bus handle. Return value: opaque pointer.
  get: function() {
    return this._int();
  },
};