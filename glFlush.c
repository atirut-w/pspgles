#include <GLES/gl.h>
#include <pspgu.h>
#include "internal.h"

void glFlush(void) {
  sceGuFinish();
  sceGuSync(0, 0);
  sceGuStart(GU_DIRECT, list);
  error = 0;
  ncmds = 0;
}
