#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "RenderWindow.hpp"

int main(int argc, char* args[])
{
 	if (SDL_Init(SDL_INIT_VIDEO) > 0)
 	{
    	std::cout << "SDL_Init failed " << SDL_GetError() << std::endl;
 	}

	if (!(IMG_Init(IMG_INIT_PNG)))
	{
		std::cout << "IMG_Init failed " << SDL_GetError() << std::endl;
	}

 	RenderWindow window("test", 1024, 760);


	bool GameRunning = true;
	SDL_Event event;

	while (GameRunning)
	{

			while (SDL_PollEvent(&event))
			{
				if (event.type == SDL_QUIT)
				{
					GameRunning = false;
				}
			}

	}

	window.CleanUp();
	SDL_Quit();

 	return 0;
}
