#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
  if (width <= 0 || height <= 0) {
    error = GL_INVALID_VALUE;
    return;
  }

  sceGuStart(GU_DIRECT, list);
  sceGuScissor(x, y, width, height);
  sceGuFinish();
  sceGuSync(0, 0);
  error = 0;
}
