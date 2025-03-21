#pragma once

#define NEXT_POW2(x) ((x) == 0 ? 1 : (1 << (32 - __builtin_clz((x) - 1))))

extern int error;
