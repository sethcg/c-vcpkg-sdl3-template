#ifndef IMGUI_EVENT_PROCESSING_H
#define IMGUI_EVENT_PROCESSING_H

#include <SDL3/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

int ImGui_SDL3_ProcessEvent(const SDL_Event* event);

#ifdef __cplusplus
}
#endif

#endif