#include "internal.h"
#include "pspgum.h"
#include <pspgu.h>

__attribute__((aligned(16))) unsigned int list[262144] = {0};
int error = 0;
int ncmds = 0;

__attribute__((constructor)) static void init() {
  sceGuInit();
  sceGuStart(GU_DIRECT, list);

  // Reset matrices
  sceGumMatrixMode(GU_PROJECTION);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_VIEW);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_MODEL);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_TEXTURE);
  sceGumLoadIdentity();
}

void inccmds() {
  ncmds++;
  if (ncmds >= BATCH_SIZE) {
    sceGuFinish();
    sceGuSync(0, 0);
    sceGuStart(GU_DIRECT, list);
    ncmds = 0;
  }
}
