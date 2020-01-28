#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Maple {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		MP_CLIENT_TRACE(e);
		while (true);
	}
}