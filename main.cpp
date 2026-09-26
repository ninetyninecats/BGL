#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window{SDL_CreateWindow("Window", 800, 600, 0)};

    SDL_GetWindowSurface(window);
    SDL_UpdateWindowSurface(window);

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}