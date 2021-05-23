//
// Created by sam on 5/16/21.
//
#include "SDL.h"

#ifndef ALTERA_ENGINE_WINDOW_H
#define ALTERA_ENGINE_WINDOW_H



class Window {
    public:
        Window();

        void createWindow(const char* title, int xPos, int yPos, int width, int height, bool fullscreen);
        void clear();
        void render();

        ~Window();

        static SDL_Renderer* renderer;
        static bool running;

    private:
        SDL_Window* window;

};


#endif //ALTERA_ENGINE_WINDOW_H
