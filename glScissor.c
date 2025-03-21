#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
  if (width <= 0 || height <= 0) {
    error = GL_INVALID_VALUE;
    return;
  }

  sceGuScissor(x, y, width, height);
  error = 0;
}
