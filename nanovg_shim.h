#include <sys/types.h>
#include <GL/gl.h>

#include "./nanovg/src/nanovg.h"

// directly define prototypes to prevent linkage errors with static functions
NVGcontext* nvgCreateGL3(int flags);
void nvgDeleteGL3(NVGcontext* ctx);

int nvglCreateImageFromHandleGL3(NVGcontext* ctx, GLuint textureId, int w, int h, int flags);
GLuint nvglImageHandleGL3(NVGcontext* ctx, int image);
