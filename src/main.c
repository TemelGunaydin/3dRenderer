#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>

// 3
SDL_Window *window = NULL;

// 5
SDL_Renderer *renderer = NULL;

// 9
bool is_running = false;

// 2
bool initialize_window() {
  if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
    fprintf(stderr, "Error initializing SDL\n");
    return false;
  }
  // 4
  window =
      SDL_CreateWindow(NULL, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                       800, 600, SDL_WINDOW_BORDERLESS);
  if (!window) {
    fprintf(stderr, "Error initalizing window\n");
    return false;
  }

  // 6
  renderer = SDL_CreateRenderer(window, -1, 0);

  if (!renderer) {
    fprintf(stderr, "Error creating renderer\n");
    return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  // 1 and 7
  is_running = initialize_window();

  // 8
  while (is_running) {
  }
  return 0;
}
