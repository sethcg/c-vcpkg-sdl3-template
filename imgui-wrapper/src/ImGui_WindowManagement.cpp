#include <imgui.h>

#include <ImGui_WindowManagement.h>

void ImGui_SetNextWindowSize(float width, float height, int cond) {
    ImGui::SetNextWindowSize(ImVec2(width, height), cond);
}

void ImGui_SetNextWindowPos(float x, float y, int cond) {
    ImGui::SetNextWindowPos(ImVec2(x, y), cond);
}

int ImGui_Begin(const char* name, int* p_open, int flags) {
    bool* p_open_bool = nullptr;
    if (p_open) {
        static bool open_state;
        open_state = (*p_open != 0);
        p_open_bool = &open_state;
    }
    
    bool result = ImGui::Begin(name, p_open_bool, flags);
    
    if (p_open && p_open_bool) {
        *p_open = *p_open_bool ? 1 : 0;
    }
    
    return result ? 1 : 0;
}

void ImGui_End(void) {
    ImGui::End();
}