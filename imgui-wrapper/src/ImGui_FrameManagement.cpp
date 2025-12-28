#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_sdlrenderer3.h>

#include <ImGui_FrameManagement.h>

void ImGui_SDLRenderer3_NewFrame(void) {
    ImGui_ImplSDLRenderer3_NewFrame();
}

void ImGui_SDL3_NewFrame(void) {
    ImGui_ImplSDL3_NewFrame();
}

void ImGui_NewFrame(void) {
    ImGui::NewFrame();
}

void ImGui_Render(void) {
    ImGui::Render();
}