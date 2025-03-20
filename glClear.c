#include <pspgu.h>
#include <GLES/gl.h>
#include <internal.h>
#include <pspdisplay.h>

void glClear(GLbitfield mask) {
  int guMask = 0;
  
  if (mask & GL_COLOR_BUFFER_BIT) {
    guMask |= GU_COLOR_BUFFER_BIT;
  }

  sceGuStart(GU_DIRECT, list);
  sceGuClear(guMask);
  sceGuFinish();
  sceGuSync(0, 0);
  error = 0;
}
