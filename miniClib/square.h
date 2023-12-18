#ifndef SQUARE_H
#define SQUARE_H

#include "miniCConfig.h"

#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif

DECLSPEC int square(int a);

#ifdef __cplusplus
}
#endif

#endif
