#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glShadeModel(GLenum mode) {
  switch (mode) {
  case GL_FLAT:
    sceGuShadeModel(GU_FLAT);
    break;
  case GL_SMOOTH:
    sceGuShadeModel(GU_SMOOTH);
    break;
  default:
    error = GL_INVALID_ENUM;
    break;
  }

  error = 0;
  inccmds();
}
