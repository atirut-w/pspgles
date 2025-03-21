#pragma once

typedef int GLint;
typedef int GLfixed;
typedef unsigned int GLsizei;
typedef unsigned int GLenum;
typedef unsigned int GLbitfield;
typedef float GLclampf;

#define GL_COLOR_BUFFER_BIT 1

enum {
  GL_INVALID_ENUM = 0x0500,
  GL_INVALID_VALUE = 0x0501,
  GL_OUT_OF_MEMORY = 0x0505,
};

enum {
  GL_SCISSOR_TEST = 0x0C11,
};

enum {
  GL_MODELVIEW = 0x1700,
  GL_PROJECTION = 0x1701,
  GL_TEXTURE = 0x1702,
};

#ifdef __cplusplus
extern "C" {
#endif

void glClear(GLbitfield mask);
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glEnable(GLenum cap);

void glLoadIdentity(void);

void glMatrixMode(GLenum mode);

void glOrthof(GLclampf left, GLclampf right, GLclampf bottom, GLclampf top,
              GLclampf nearVal, GLclampf farVal);
void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top,
              GLfixed nearVal, GLfixed farVal);

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

#ifdef __cplusplus
}
#endif
