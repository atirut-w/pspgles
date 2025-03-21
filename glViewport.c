#include "pspdisplay.h"
#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
  if (width <= 0 || height <= 0) {
    error = GL_INVALID_VALUE;
    return;
  }

  void *fbp0 = guGetStaticVramBuffer(width, height, GU_PSM_8888);
  void *fbp1 = guGetStaticVramBuffer(width, height, GU_PSM_8888);
  void *zbp = guGetStaticVramBuffer(width, height, GU_PSM_4444);

  sceGuDrawBuffer(GU_PSM_8888, fbp0, NEXT_POW2(width));
  sceGuDispBuffer(width, height, fbp1, NEXT_POW2(width));
  sceGuDepthBuffer(zbp, NEXT_POW2(width));

  sceGuOffset(x, y);
  sceGuViewport(x + width / 2, y + height / 2, width, height);
  error = 0;
}
