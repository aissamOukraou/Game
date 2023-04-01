#include <iostream>
 #include "SDL2/SDL.h"
using namespace std;
int const WINDOW_LARGUEUR=1280;
int const WINDOW_HAUTEUR=720;
int main(int argc, char **argv)
{
    SDL_Window *window(nullptr);
    SDL_Renderer *renderer(nullptr);
    if(SDL_Init(SDL_INIT_VIDEO || SDL_INIT_AUDIO) != 0) 
    {
        cout <<"SDL_Init Failed. Error: "<< SDL_GetError()<<endl;
    }
    window=SDL_CreateWindow("Pong", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED, WINDOW_HAUTEUR, WINDOW_HAUTEUR, SDL_WINDOW_SHOWN);
    if(window == nullptr) cout <<"SDL_CreateWindow Failed. Error: "<<SDL_GetError()<<endl;
    renderer=SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    if(renderer == nullptr) cout <<"SDL_CreateRenderer Failed. Error: "<<SDL_GetError()<<endl;


    
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);   
    return EXIT_SUCCESS;
}