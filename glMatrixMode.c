#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>
#include <pspgum.h>

__attribute__((constructor)) static void init() {
  // Set all matrix modes to identity
  sceGumMatrixMode(GU_PROJECTION);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_VIEW);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_MODEL);
  sceGumLoadIdentity();
  sceGumMatrixMode(GU_TEXTURE);
  sceGumLoadIdentity();
  // Set default matrix mode to modelview
  sceGumMatrixMode(GU_MODEL);
}

void glMatrixMode(GLenum mode) {
  switch (mode) {
  case GL_MODELVIEW:
    sceGumMatrixMode(GU_MODEL);
    break;
  case GL_PROJECTION:
    sceGumMatrixMode(GU_PROJECTION);
    break;
  case GL_TEXTURE:
    sceGumMatrixMode(GU_TEXTURE);
    break;
  default:
    error = GL_INVALID_ENUM;
    break;
  }
}
