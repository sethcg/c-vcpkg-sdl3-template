#ifndef IMGUI_WINDOW_MANAGEMENT_H
#define IMGUI_WINDOW_MANAGEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

// ImGuiCond
#define ImGuiCond_None              0
#define ImGuiCond_Always            1
#define ImGuiCond_Once              2
#define ImGuiCond_FirstUseEver      4
#define ImGuiCond_Appearing         8

// ImGuiWindowFlags
#define ImGuiWindowFlags_None                           0
#define ImGuiWindowFlags_NoTitleBar                     1
#define ImGuiWindowFlags_NoResize                       2
#define ImGuiWindowFlags_NoMove                         4
#define ImGuiWindowFlags_NoScrollbar                    8
#define ImGuiWindowFlags_NoScrollWithMouse              16
#define ImGuiWindowFlags_NoCollapse                     32
#define ImGuiWindowFlags_AlwaysAutoResize               64
#define ImGuiWindowFlags_NoBackground                   128
#define ImGuiWindowFlags_NoSavedSettings                256
#define ImGuiWindowFlags_NoMouseInputs                  512
#define ImGuiWindowFlags_MenuBar                        1024
#define ImGuiWindowFlags_HorizontalScrollbar            2048
#define ImGuiWindowFlags_NoFocusOnAppearing             4096
#define ImGuiWindowFlags_NoBringToFrontOnFocus          8192
#define ImGuiWindowFlags_AlwaysVerticalScrollbar        16384
#define ImGuiWindowFlags_AlwaysHorizontalScrollbar      32768
#define ImGuiWindowFlags_NoNavInputs                    65536
#define ImGuiWindowFlags_NoNavFocus                     131072
#define ImGuiWindowFlags_UnsavedDocument                262144

void ImGui_SetNextWindowSize(float width, float height, int cond);
void ImGui_SetNextWindowPos(float x, float y, int cond);
int ImGui_Begin(const char* name, int* p_open, int flags);
void ImGui_End(void);

#ifdef __cplusplus
}
#endif

#endif