// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "GLFW/glfw3.h"
// or we can use
// name mangling
//extern "C"  int glfwinit();
int main()
{
    
    std::cout << "Hello World!\n";

    int a = glfwInit();


    std::cout << a << std::endl;
}

//for static change the linker input to glfw3dll.lib
// in dynamic linking you have to place your dll file in the executable folder,that is genrally the debug folder(X64)
