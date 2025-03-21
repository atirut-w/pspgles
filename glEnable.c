#include <GLES/gl.h>
#include <internal.h>
#include <pspgu.h>

void glEnable(GLenum cap) {
  switch (cap) {
  case GL_ALPHA_TEST:
    sceGuEnable(GU_ALPHA_TEST);
    break;
  case GL_BLEND:
    sceGuEnable(GU_BLEND);
    break;
  case GL_COLOR_LOGIC_OP:
    sceGuEnable(GU_COLOR_LOGIC_OP);
    break;
  case GL_CLIP_PLANE0:
    sceGuEnable(GU_CLIP_PLANES);
    break;
  case GL_COLOR_MATERIAL:
    // Not implemented
    break;
  case GL_CULL_FACE:
    sceGuEnable(GU_CULL_FACE);
    break;
  case GL_DEPTH_TEST:
    sceGuEnable(GU_DEPTH_TEST);
    break;
  case GL_DITHER:
    sceGuEnable(GU_DITHER);
    break;
  case GL_FOG:
    sceGuEnable(GU_FOG);
    break;
  case GL_LIGHT0:
    sceGuEnable(GU_LIGHT0);
    break;
  case GL_LIGHT1:
    sceGuEnable(GU_LIGHT1);
    break;
  case GL_LIGHT2:
    sceGuEnable(GU_LIGHT2);
    break;
  case GL_LIGHT3:
    sceGuEnable(GU_LIGHT3);
    break;
  case GL_LIGHTING:
    sceGuEnable(GU_LIGHTING);
    break;
  case GL_LINE_SMOOTH:
    sceGuEnable(GU_LINE_SMOOTH);
    break;
  case GL_MULTISAMPLE:
    // Not implemented
    break;
  case GL_NORMALIZE:
    // Not implemented
    break;
  case GL_POINT_SMOOTH:
    // Not implemented
    break;
  case GL_POINT_SPRITE_OES:
    // Not implemented
    break;
  case GL_POLYGON_OFFSET_FILL:
    // Not implemented
    break;
  case GL_RESCALE_NORMAL:
    // Not implemented
    break;
  case GL_SAMPLE_ALPHA_TO_COVERAGE:
    // Not implemented
    break;
  case GL_SAMPLE_COVERAGE:
    // Not implemented
    break;
  case GL_SCISSOR_TEST:
    sceGuEnable(GU_SCISSOR_TEST);
    break;
  case GL_STENCIL_TEST:
    sceGuEnable(GU_STENCIL_TEST);
    break;
  case GL_TEXTURE_2D:
    sceGuEnable(GU_TEXTURE_2D);
    break;
  default:
    error = GL_INVALID_ENUM;
    return;
  }

  error = 0;
  inccmds();
}
