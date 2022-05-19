#include <iostream>
#include <GLFW/glfw3.h>
#include <demoprojConfig.h>

int main(int argc, char* argv[]) {

    std::cout << argv[0] << " Version: " << DEMOPROJ_VERSION_MAJOR << "." << DEMOPROJ_VERSION_MINOR << std::endl;

	GLFWwindow *window;
	
    if( !glfwInit() ) {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window) {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

	    // Main loop
    while( !glfwWindowShouldClose(window) ) {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

	return 0; 
}

