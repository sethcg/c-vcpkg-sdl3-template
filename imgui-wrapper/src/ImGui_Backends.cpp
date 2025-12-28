#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>

#include <ImGui_Backends.h>

int ImGui_SDL3_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer) {
    return ImGui_ImplSDL3_InitForSDLRenderer(window, renderer) ? 1 : 0;
}

void ImGui_SDL3_Shutdown(void) {
    ImGui_ImplSDL3_Shutdown();
}

int ImGui_SDLRenderer3_Init(SDL_Renderer* renderer) {
    return ImGui_ImplSDLRenderer3_Init(renderer) ? 1 : 0;
}

void ImGui_SDLRenderer3_Shutdown(void) {
    ImGui_ImplSDLRenderer3_Shutdown();
}