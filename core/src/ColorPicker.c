#include <SDL3/SDL.h>
#include <ColorPicker.h>

rgb_color GetColor(double currentTime) {
    rgb_color colorValue = {
        .r = (float) (0.5 + 0.5 * SDL_sin(currentTime)), 
        .g = (float) (0.5 + 0.5 * SDL_sin(currentTime + SDL_PI_D * 2 / 3)),
        .b = (float) (0.5 + 0.5 * SDL_sin(currentTime + SDL_PI_D * 4 / 3))
    };
    return colorValue;
}