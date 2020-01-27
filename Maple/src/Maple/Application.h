#pragma once

#include "Core.h"

namespace Maple {
	class MAPLE_API Application
	{
	public:
		Application();

		// Destructor is virtual because it could be implemented by child class
		virtual ~Application();
		void Run();
	};

	// To be defined in a client
	Application* CreateApplication();
}
