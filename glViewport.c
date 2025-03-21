#include "pspdisplay.h"
#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
  if (width <= 0 || height <= 0) {
    error = GL_INVALID_VALUE;
    return;
  }

  // Don't allocate new buffers on each call, just update viewport
  sceGuOffset(x, y);
  sceGuViewport(x + width / 2, y + height / 2, width, height);

  error = 0;
  inccmds();
}
