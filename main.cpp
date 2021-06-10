#include <GLFW/glfw3.h>
#include "config.cpp"

/*
Windows Game Engine that exports to an executable

Martin Angell 2021

Credit to OpenGL and GLFW
Using example GLFW code
*/

int main(void)
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(defaultWidth, defaultHeight, appName.c_str(), NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}