#include <iostream>

#include "GLFW/glfw3.h"

void
error_callback(int error, const char* description)
{
   puts(description);
}

int
main()
{
   glfwSetErrorCallback(error_callback);

   if(!glfwInit())
   {
      std::cout << "ERROR: GLFW failed to Initialize" << std::endl;
      //TODO: Logging
      return -1;
   }

   char *WindowTitle = "Hello World";
   GLFWwindow* Window = glfwCreateWindow(960, 540, WindowTitle, NULL, NULL);

   if(!Window)
   {
      glfwTerminate();
      //TODO: Logging
      return -1;
   }

   //TODO: Running loop

   //NOTE: Yay
   std::cout << "Window Created successfully" << std::endl;
   glfwTerminate();

   system("pause");

   return 0;
}