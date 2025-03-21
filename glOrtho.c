#include <GLES/gl.h>
#include <pspgu.h>
#include <pspgum.h>

void glOrthof(GLclampf left, GLclampf right, GLclampf bottom, GLclampf top,
              GLclampf nearVal, GLclampf farVal) {
  sceGumOrtho(left, right, bottom, top, nearVal, farVal);
}

void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top,
              GLfixed nearVal, GLfixed farVal) {
  sceGumOrtho(left, right, bottom, top, nearVal, farVal);
}
