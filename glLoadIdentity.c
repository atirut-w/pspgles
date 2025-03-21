#include <GLES/gl.h>
#include <pspgu.h>
#include <pspgum.h>

void glLoadIdentity(void) {
  sceGumLoadIdentity();
}
