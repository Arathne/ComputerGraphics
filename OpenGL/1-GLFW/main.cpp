#include <GLFW/glfw3.h>

int main ()
{
	int initializer = glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(640, 480, "OpenGL GLFW Window", NULL, NULL);
	glfwMakeContextCurrent(window);
	
	glViewport(0, 0, 640, 480);

	while (glfwWindowShouldClose(window) == false)
	{
		glfwPollEvents();

		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

		glfwSwapBuffers(window);
	}

	glfwTerminate();
	return 0;
}
