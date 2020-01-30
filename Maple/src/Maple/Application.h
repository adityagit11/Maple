#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Maple {
	class MAPLE_API Application
	{
	public:
		Application();

		// Destructor is virtual because it could be implemented by child class
		virtual ~Application();
		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in a client
	Application* CreateApplication();
}
