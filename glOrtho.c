#include <internal.h>
#include <GLES/gl.h>
#include <pspgu.h>
#include <pspgum.h>

void glOrthof(GLclampf left, GLclampf right, GLclampf bottom, GLclampf top,
              GLclampf nearVal, GLclampf farVal) {
  sceGumOrtho(left, right, bottom, top, nearVal, farVal);
  error = 0;
  inccmds();
}

void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top,
              GLfixed nearVal, GLfixed farVal) {
  sceGumOrtho(left, right, bottom, top, nearVal, farVal);
  error = 0;
  inccmds();
}
