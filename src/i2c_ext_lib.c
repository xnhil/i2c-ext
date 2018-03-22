#include "mgos.h"
#include "mgos_i2c.h"
#include "mgos_sys_config.h"
#include "mgos_config.h"

static struct mgos_i2c *s_global_i2c_ext;

bool mgos_i2c_ext_init(void) {
  if (!mgos_sys_config_get_i2c_ext_enable()) return true;
  s_global_i2c_ext = mgos_i2c_create((const struct mgos_config_i2c *)mgos_sys_config_get_i2c_ext());
  return (s_global_i2c_ext != NULL);
}

struct mgos_i2c *mgos_i2c_get_ext_global(void) {
  return s_global_i2c_ext;
}
