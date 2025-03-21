#include <pspgu.h>
#include <GLES/gl.h>
#include <internal.h>
#include <pspdisplay.h>

void glClear(GLbitfield mask) {
  int guMask = 0;
  
  if (mask & GL_COLOR_BUFFER_BIT) {
    guMask |= GU_COLOR_BUFFER_BIT;
  }
  if (mask & GL_DEPTH_BUFFER_BIT) {
    guMask |= GU_DEPTH_BUFFER_BIT;
  }
  if (mask & GL_STENCIL_BUFFER_BIT) {
    guMask |= GU_STENCIL_BUFFER_BIT;
  }

  sceGuClear(guMask);
  error = 0;
  inccmds();
}
