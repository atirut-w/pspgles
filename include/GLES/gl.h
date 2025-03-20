#pragma once

typedef int GLint;
typedef unsigned int GLsizei;
typedef unsigned int GLenum;
typedef unsigned int GLbitfield;
typedef float GLclampf;

#define GL_COLOR_BUFFER_BIT 1

enum {
  GL_INVALID_VALUE = 0x0501,
  GL_OUT_OF_MEMORY = 0x0505,
};

enum {
  GL_SCISSOR_TEST = 0x0C11,
};

#ifdef __cplusplus
extern "C" {
#endif

void glEnable(GLenum cap);

void glClear(GLbitfield mask);
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

#ifdef __cplusplus
}
#endif
