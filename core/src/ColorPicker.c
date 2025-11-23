#include <SDL3/SDL.h>
#include <ColorPicker.h>

rgb_color GetColor(double currentTime) {
    const float red = (float)(0.5 + 0.5 * SDL_sin(currentTime));
    const float green = (float)(0.5 + 0.5 * SDL_sin(currentTime + SDL_PI_D * 2 / 3));
    const float blue = (float)(0.5 + 0.5 * SDL_sin(currentTime + SDL_PI_D * 4 / 3));
    rgb_color color = { .r = red, .g = green, .b = blue };
    return color;
}