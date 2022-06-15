#pragma once

#include <vector>
#include <string>
#include <functional>
#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace scene {

	class Scene {
	public:
		Scene() {}
		Scene(GLFWwindow*& window): m_Window(window) {
			glfwGetWindowSize(m_Window, &m_Width, &m_Height);
		}
		virtual ~Scene() {}
		
		virtual void OnUpdate(float deltaTime) {}
		virtual void OnRender() {}
		virtual void CreateUI() {}

	protected:
		GLFWwindow* m_Window;
		int m_Width;
		int m_Height;
	};

	
}