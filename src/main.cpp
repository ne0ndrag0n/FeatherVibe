#include <iostream>
#include <SDL.h>
#include <GL/gl.h>
#include "node/node.hpp"

int main( int argc, char** argv ) {
	SDL_Window* mainWindow;
	SDL_GLContext mainContext;

	if( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
		std::cout << "SDL could not init" << std::endl;
		return 1;
	}

	SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 4 );
    SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 5 );

	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );
	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 24 );

	mainWindow = SDL_CreateWindow( "feathervibe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 512, 512, SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN );
	if( !mainWindow ) {
		std::cout << "SDL could not create window" << std::endl;
		return 2;
	}

	// TODO: Check for SDL error
	mainContext = SDL_GL_CreateContext( mainWindow );
	// TODO: Check for SDL error

	SDL_GL_SetSwapInterval( 1 );

	bool running = true;
	while( running ) {
		SDL_Event event;
		while( SDL_PollEvent( &event ) ) {
			if( event.type == SDL_QUIT ) {
				running = false;
			}
		}

		glViewport( 0, 0, 512, 512 );
		glClearColor( 0.18f, 0.19f, 0.21f, 1.0f );
		glClear( GL_COLOR_BUFFER_BIT );

		SDL_GL_SwapWindow( mainWindow );
	}

    SDL_GL_DeleteContext( mainContext );
    SDL_DestroyWindow( mainWindow );
    SDL_Quit();

	return 0;
}