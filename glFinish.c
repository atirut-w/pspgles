#include <GLES/gl.h>
#include <pspgu.h>
#include "internal.h"

void glFinish(void) {
  sceGuFinish();
  sceGuSync(0, 0);
  sceGuStart(GU_DIRECT, list);
  ncmds = 0;
}
