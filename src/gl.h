/*
 * gl.h
 *
 *  Created on: Aug 20, 2016
 *      Author: Aliaksei Syrel
 */

#ifndef GL_H_
#define GL_H_

#include "LayersTypes.h"
#include "GLScreenBuffer.h"
#include "GLContext.h"
#include "GLContextProvider.h"
#include "SkiaGLGlue.h"
#include "2d/2D.h"

using namespace  mozilla::gl;
using namespace  mozilla::gfx;

#ifdef __cplusplus
extern "C" {
#endif

GLContext* moz2d_gl_create_wrapping_existing(void* aContext, void* aSurface);
GLContext* moz2d_gl_get_global_context();
SkiaGLGlue* moz2d_gl_create_skia_gl_glue_for(GLContext* aContext);
DrawTarget* moz2d_gl_create_skia_gl_draw_target(SkiaGLGlue* skiaGlue, int32_t width, int32_t height, SurfaceFormat aSurfaceFormat);
GLScreenBuffer* moz2d_gl_context_get_screen(GLContext* aContext);
GLuint moz2d_gl_screen_buffer_get_read_fb(GLScreenBuffer* screenBuffer);

#ifdef __cplusplus
}
#endif

#endif /* GL_H_ */