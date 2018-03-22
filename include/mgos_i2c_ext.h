/*
 * Copyright 2018 xnhil
 * All rights reserved
 */

/*
 * I2C extra channel library
 */

#ifndef CS_FW_SRC_MGOS_I2C_EXT_H_
#define CS_FW_SRC_MGOS_I2C_EXT_H_

#include "mgos_i2c.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Return i2c bus handle that is set up via the sysconfig. */
struct mgos_i2c *mgos_i2c_ext_get_global(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_FW_SRC_MGOS_I2C_EXT_H_ */
