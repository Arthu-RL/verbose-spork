#include <iostream>
#include <GLFW/glfw3.h>
#include <leif/leif.h>
#include <raylib.h>

static int width = 1280, height = 720;

static void resizecb(GLFWwindow* window, int w, int h) {
  width = w;
  height = h;
  glViewport(0, 0, w, h);
  lf_resize_display(w, h);
}

int main() 
{
    std::cout << "Hello CMAKE" << "\n";

    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    GLFWwindow* applicationWindow = glfwCreateWindow(width, height, "Todo Tasker", NULL, NULL);
    if (!applicationWindow) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(applicationWindow);

    lf_init_glfw(1280, 720, applicationWindow);

    while (!glfwWindowShouldClose(applicationWindow)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

        lf_begin();

        lf_text("heello");

        lf_end();

        glfwPollEvents();
        glfwSwapBuffers(applicationWindow);
    }

    glfwDestroyWindow(applicationWindow);
    glfwTerminate();

    return 0;
}