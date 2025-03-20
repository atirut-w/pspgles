#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glEnable(GLenum cap) {
  switch (cap) {
  case GL_SCISSOR_TEST:
    sceGuEnable(GU_SCISSOR_TEST);
    break;
  default:
    error = GL_INVALID_VALUE;
    return;
  }
  error = 0;
}
