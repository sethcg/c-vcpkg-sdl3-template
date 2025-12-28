#include <imgui.h>

#include <ImGui_Widgets.h>

int ImGui_Button(const char* label, float width, float height) {
    return ImGui::Button(label, ImVec2(width, height)) ? 1 : 0;
}