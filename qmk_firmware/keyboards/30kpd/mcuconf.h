#pragma once

#include_next <mcuconf.h>

#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 FALSE

#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE

#if RP_I2C_USE_I2C1 != TRUE
#error "RP_I2C_USE_I2C1 is NOT enabled"
#endif
