// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GLX_SGIX_video_source__
#define __GLUX_GLX_SGIX_video_source__

GLUX_NEW_PLUGIN(GLX_SGIX_video_source);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
#ifdef _VL_H
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXCreateGLXVideoSourceSGIX
typedef GLXVideoSourceSGIX (APIENTRYP PFNXGLUXCREATEGLXVIDEOSOURCESGIXPROC) (Display *display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
#endif
#ifndef __GLUX__GLFCT_glXDestroyGLXVideoSourceSGIX
typedef void (APIENTRYP PFNXGLUXDESTROYGLXVIDEOSOURCESGIXPROC) (Display *dpy, GLXVideoSourceSGIX glxvideosource);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXCreateGLXVideoSourceSGIX
extern PFNXGLUXCREATEGLXVIDEOSOURCESGIXPROC glXCreateGLXVideoSourceSGIX;
#endif
#ifndef __GLUX__GLFCT_glXDestroyGLXVideoSourceSGIX
extern PFNXGLUXDESTROYGLXVIDEOSOURCESGIXPROC glXDestroyGLXVideoSourceSGIX;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------
