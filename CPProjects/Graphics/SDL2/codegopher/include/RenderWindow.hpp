#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow
{
	public:
			RenderWindow(const char* p_title, int p_w, int p_h);
			SDL_Texture* LoadTexture(const char* p_FilePath);
			void CleanUp();
			void clear();
			void render(SDL_Texture* p_Tex);
			void display();
	private:
		SDL_Window* window;
		SDL_Renderer* renderer;
};
