#include "kgpl.h"
#include <cstdint>
#include <string>
#include <cstdio>

#include "../lib/glfw3.h"

using namespace KGPL;

Window::Window(uint32_t width, uint32_t height, const std::string& title) {
	this->width = width; this->height = height; this->title = title;

	if (!glfwInit()) {
		    fprintf(stderr, "GLFW initialization failed\n");
		    exit(EXIT_FAILURE);
        }

	    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);

	    window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);

        if (!window) {
		    fprintf(stderr, "Window creation failed\n");
		    glfwTerminate();
		    exit(EXIT_FAILURE);
	    }

        glfwMakeContextCurrent(window);
        glViewport(0, 0, width, height);

	    LOG("OpenGL Version: %s\n", glGetString(GL_VERSION));
}

Window::~Window() {
    
}
