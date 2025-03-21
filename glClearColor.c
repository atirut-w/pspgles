#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
  sceGuClearColor(GU_COLOR(red, green, blue, alpha));
  error = 0;
}
