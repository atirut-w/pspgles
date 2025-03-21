#pragma once

typedef int GLint;
typedef int GLfixed;
typedef unsigned int GLsizei;
typedef unsigned int GLenum;
typedef unsigned int GLbitfield;
typedef float GLclampf;

#define GL_COLOR_BUFFER_BIT  0x00004000
#define GL_DEPTH_BUFFER_BIT   0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400

enum {
  GL_INVALID_ENUM = 0x0500,
  GL_INVALID_VALUE = 0x0501,
  GL_OUT_OF_MEMORY = 0x0505,
};

/* OpenGL ES 1.1 capability enums with standard values */
enum {
  GL_ALPHA_TEST = 0x0BC0,
  GL_BLEND = 0x0BE2,
  GL_COLOR_LOGIC_OP = 0x0BF2,
  GL_CLIP_PLANE0 = 0x3000,
  GL_COLOR_MATERIAL = 0x0B57,
  GL_CULL_FACE = 0x0B44,
  GL_DEPTH_TEST = 0x0B71,
  GL_DITHER = 0x0BD0,
  GL_FOG = 0x0B60,
  GL_LIGHT0 = 0x4000,
  GL_LIGHT1 = 0x4001,
  GL_LIGHT2 = 0x4002,
  GL_LIGHT3 = 0x4003,
  GL_LIGHTING = 0x0B50,
  GL_LINE_SMOOTH = 0x0B20,
  GL_MULTISAMPLE = 0x809D,
  GL_NORMALIZE = 0x0BA1,
  GL_POINT_SMOOTH = 0x0B10,
  GL_POINT_SPRITE_OES = 0x8861,
  GL_POLYGON_OFFSET_FILL = 0x8037,
  GL_RESCALE_NORMAL = 0x803A,
  GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E,
  GL_SAMPLE_COVERAGE = 0x80A0,
  GL_SCISSOR_TEST = 0x0C11,
  GL_STENCIL_TEST = 0x0B90,
  GL_TEXTURE_2D = 0x0DE1,
};

enum {
  GL_MODELVIEW = 0x1700,
  GL_PROJECTION = 0x1701,
  GL_TEXTURE = 0x1702,
};

enum {
  GL_FLAT = 0x1D00,
  GL_SMOOTH = 0x1D01,
};

#ifdef __cplusplus
extern "C" {
#endif

void glClear(GLbitfield mask);
void glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

void glDisable(GLenum cap);

void glEnable(GLenum cap);

void glFinish(void);
void glFlush(void);

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
