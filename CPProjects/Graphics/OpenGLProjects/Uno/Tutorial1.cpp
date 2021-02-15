#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//include glew first
#include <GL/glew.h>
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include <GL/freeglut.h>

int main()
{

	GLenum err;

	//initialise glfw
	glewExperimental = true;
	if(err = !glfwInit())
	{
		std::cout << stderr << " Failed to initialize glfw " << glewGetErrorString(err) << std::endl;
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window;
	window = glfwCreateWindow( 200, 100, "T1", NULL, NULL);
	if( window == NULL)
	{
		std::cout << stderr << "failed to open window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	//glewExperimental = true;

	glutInitDisplayMode(GLUT_RGB);

	if (glewInit() != GLEW_OK)
	{
		std::cout << stderr << " failed to iniialize glew " << glewGetErrorString(glewInit()) << std::endl;
		return -1;
	}

	//glfwMakeContextCurrent(window);
	glewExperimental = true;

	glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

	do
	{
		//clear screen
		glClear(GL_COLOR_BUFFER_BIT);

		//swap buffer
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	while(glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(window) == 0);

}
