#ifndef APP_H
#define APP_H

#include <SDL3/SDL.h>

#define WINDOW_WIDTH 480
#define WINDOW_HEIGHT 640


typedef struct {
    SDL_Window* window;
    SDL_Renderer* renderer;
} AppContext;

#endif