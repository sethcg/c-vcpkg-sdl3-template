#ifndef IMGUI_DRAW_DATA_H
#define IMGUI_DRAW_DATA_H

#include <SDL3/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

void* ImGui_GetDrawData(void);
void ImGui_SDLRenderer3_RenderDrawData(void* draw_data, SDL_Renderer* renderer);

#ifdef __cplusplus
}
#endif

#endif