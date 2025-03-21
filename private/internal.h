#pragma once

#define NEXT_POW2(x) ((x) == 0 ? 1 : (1 << (32 - __builtin_clz((x) - 1))))
#define BATCH_SIZE 4096

extern unsigned int list[262144];
extern int error;
extern int ncmds;

void inccmds();
