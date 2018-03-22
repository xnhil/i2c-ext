#include "mgos.h"
#include "mgos_i2c.h"

static struct mgos_i2c *s_global_i2c_ext;

bool mgos_i2c_ext_init(void) {
  return true;
}

bool mgos_i2c_ext_init(void) {
  if (!mgos_sys_config_get_i2c_ext_enable()) return true;
  // should do sanity checks
  // supported system e.g. ESP32 h/w or GPIO s/w driven
  // ESP32: Flip unit in configs, pins are separate
  // GPIO: check pins sep
  s_global_i2c_ext = mgos_i2c_create(mgos_sys_config_get_i2c_ext());
  return (s_global_i2c_ext != NULL);
}

struct mgos_i2c *mgos_i2c_get_ext_global(void) {
  return s_global_i2c_ext;
}
