#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glShadeModel(GLenum mode) {
  switch (mode) {
  case GL_FLAT:
    sceGuShadeModel(GU_FLAT);
    error = 0;
    break;
  case GL_SMOOTH:
    sceGuShadeModel(GU_SMOOTH);
    error = 0;
    break;
  default:
    error = GL_INVALID_ENUM;
    break;
  }

  inccmds();
}
