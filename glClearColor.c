#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
  sceGuStart(GU_DIRECT, list);
  sceGuClearColor(GU_COLOR(red, green, blue, alpha));
  sceGuFinish();
  sceGuSync(0, 0);
  error = 0;
}
