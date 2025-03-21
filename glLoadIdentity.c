#include "internal.h"
#include <GLES/gl.h>
#include <pspgu.h>
#include <pspgum.h>

void glLoadIdentity(void) {
  sceGumLoadIdentity();
  error = 0;
  inccmds();
}
