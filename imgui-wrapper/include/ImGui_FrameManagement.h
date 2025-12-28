#ifndef IMGUI_FRAME_MANAGEMENT_H
#define IMGUI_FRAME_MANAGEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

void ImGui_SDLRenderer3_NewFrame(void);
void ImGui_SDL3_NewFrame(void);
void ImGui_NewFrame(void);
void ImGui_Render(void);

#ifdef __cplusplus
}
#endif

#endif