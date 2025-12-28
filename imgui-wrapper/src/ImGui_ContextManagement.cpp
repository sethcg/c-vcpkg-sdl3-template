#include <imgui.h>

#include <ImGui_ContextManagement.h>

void ImGui_CreateContext(void) {
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
}

void ImGui_DestroyContext(void) {
    ImGui::DestroyContext();
}