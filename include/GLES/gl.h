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
  GL_ALPHA_TEST,
  GL_BLEND,
  GL_COLOR_LOGIC_OP,
  GL_CLIP_PLANE0,
  GL_COLOR_MATERIAL,
  GL_CULL_FACE,
  GL_DEPTH_TEST,
  GL_DITHER,
  GL_FOG,
  GL_LIGHT0,
  GL_LIGHT1,
  GL_LIGHT2,
  GL_LIGHT3,
  GL_LIGHTING,
  GL_LINE_SMOOTH,
  GL_MULTISAMPLE,
  GL_NORMALIZE,
  GL_POINT_SMOOTH,
  GL_POINT_SPRITE_OES,
  GL_POLYGON_OFFSET_FILL,
  GL_RESCALE_NORMAL,
  GL_SAMPLE_ALPHA_TO_COVERAGE,
  GL_SAMPLE_COVERAGE,
  GL_SCISSOR_TEST,
  GL_STENCIL_TEST,
  GL_TEXTURE_2D,
};

enum {
  GL_MODELVIEW = 0x1700,
  GL_PROJECTION = 0x1701,
  GL_TEXTURE = 0x1702,
};

enum {
  GL_FLAT,
  GL_SMOOTH,
};

#ifdef __cplusplus
extern "C" {
#endif

void glClear(GLbitfield mask);
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glDisable(GLenum cap);

void glEnable(GLenum cap);

void glLoadIdentity(void);

void glMatrixMode(GLenum mode);

void glOrthof(GLclampf left, GLclampf right, GLclampf bottom, GLclampf top,
              GLclampf nearVal, GLclampf farVal);
void glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top,
              GLfixed nearVal, GLfixed farVal);

void glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
void glShadeModel(GLenum mode);

void glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

#ifdef __cplusplus
}
#endif
