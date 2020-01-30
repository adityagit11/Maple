#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Maple/Events/ApplicationEvent.h"
#include "Window.h"


namespace Maple {
	class MAPLE_API Application
	{
	public:
		Application();

		// Destructor is virtual because it could be implemented by child class
		virtual ~Application();
		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	// To be defined in a client
	Application* CreateApplication();
}
