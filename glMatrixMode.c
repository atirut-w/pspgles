#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>
#include <pspgum.h>

void glMatrixMode(GLenum mode) {
  switch (mode) {
  case GL_MODELVIEW:
    sceGumMatrixMode(GU_MODEL);
    error = 0;
    break;
  case GL_PROJECTION:
    sceGumMatrixMode(GU_PROJECTION);
    error = 0;
    break;
  case GL_TEXTURE:
    sceGumMatrixMode(GU_TEXTURE);
    error = 0;
    break;
  default:
    error = GL_INVALID_ENUM;
    break;
  }

  inccmds();
}
