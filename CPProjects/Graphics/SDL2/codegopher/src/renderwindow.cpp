#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char* p_title, int p_w, int p_h)
:window(NULL), renderer(NULL)
{

		window = SDL_CreateWindow(p_title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, p_w, p_h, SDL_WINDOW_SHOWN);

		if (window == NULL)
		{
			std::cout << "SDL_CreateWindow failed " << SDL_GetError() << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

};

SDL_Texture* RenderWindow::LoadTexture(const char* p_FilePath)
{
	SDL_Texture* texture = NULL
	texture = IMGLoadTexture(renderer, p_FilePath)
}

void RenderWindow::CleanUp()
{
	SDL_DestroyWindow(window);
}
