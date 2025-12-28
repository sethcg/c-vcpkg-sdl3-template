#include <imgui_impl_sdl3.h>

#include <ImGui_EventProcessing.h>

int ImGui_SDL3_ProcessEvent(const SDL_Event* event) {
    return ImGui_ImplSDL3_ProcessEvent(event) ? 1 : 0;
}