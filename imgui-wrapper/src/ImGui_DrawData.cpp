#include <imgui.h>
#include <imgui_impl_sdlrenderer3.h>

#include <ImGui_DrawData.h>

void* ImGui_GetDrawData(void) {
    return ImGui::GetDrawData();
}

void ImGui_SDLRenderer3_RenderDrawData(void* draw_data, SDL_Renderer* renderer) {
    ImGui_ImplSDLRenderer3_RenderDrawData((ImDrawData*)draw_data, renderer);
}