#define SDL_MAIN_USE_CALLBACKS 1 // USE CALLBACKS INSTEAD OF THE "main()" FUNCTION
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <App.h>
#include <ColorPicker.h>

// THIS FUNCTION RUNS ONCE AT STARTUP
SDL_AppResult SDL_AppInit(void **appstate, int argc, char *argv[]) {
    SDL_SetAppMetadata("Example Renderer Clear", "1.0", "com.example.renderer-clear");

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS)) {
        SDL_LogError(SDL_LOG_CATEGORY_CUSTOM, "Error %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    // SETUP APP STATE
    AppContext* appContext = (AppContext*) SDL_malloc(sizeof(AppContext));
    if (appContext == NULL) {
        SDL_LogError(SDL_LOG_CATEGORY_CUSTOM, "Error %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }
    *appstate = appContext;

    if (!SDL_CreateWindowAndRenderer("examples/renderer/clear", WINDOW_HEIGHT, WINDOW_WIDTH, 0, &appContext->window, &appContext->renderer)) {
        SDL_LogError(SDL_LOG_CATEGORY_CUSTOM, "Error %s", SDL_GetError());
        return SDL_APP_FAILURE;
    }

    return SDL_APP_CONTINUE;
}

// THIS FUNCTION RUNS WHEN A NEW EVENT OCCURS (MOUSE INPUT, KEY PRESS, ETC.)
SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event) {
    AppContext* appContext = (AppContext*) appstate;

    if (event->type == SDL_EVENT_QUIT) {
        return SDL_APP_SUCCESS;
    }
    return SDL_APP_CONTINUE;
}

// THIS FUNCTION RUNS ONCE PER FRAME
SDL_AppResult SDL_AppIterate(void *appstate) {
    AppContext* appContext = (AppContext*) appstate;

    const double currentTime = ((double)SDL_GetTicks()) / 1000.0;

    // CHOOSE NEW COLOR FOR THE FRAME. SINE WAVE TRICK MAKES IT FADE SMOOTHLY
    rgb_color color = GetColor(currentTime);
    SDL_SetRenderDrawColorFloat(appContext->renderer, color.r, color.g, color.b, SDL_ALPHA_OPAQUE_FLOAT);

    SDL_RenderClear(appContext->renderer);
    SDL_RenderPresent(appContext->renderer);

    return SDL_APP_CONTINUE;
}


void SDL_AppQuit(void *appstate, SDL_AppResult result) {
    AppContext* appContext = (AppContext*) appstate;

    SDL_DestroyRenderer(appContext->renderer);
    SDL_DestroyWindow(appContext->window);
    SDL_Quit();

    SDL_free(appContext);
}