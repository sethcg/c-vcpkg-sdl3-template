#ifndef IMGUI_BACKENDS_H
#define IMGUI_BACKENDS_H

#include <SDL3/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

int ImGui_SDL3_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer);
void ImGui_SDL3_Shutdown(void);
int ImGui_SDLRenderer3_Init(SDL_Renderer* renderer);
void ImGui_SDLRenderer3_Shutdown(void);

#ifdef __cplusplus
}
#endif

#endif