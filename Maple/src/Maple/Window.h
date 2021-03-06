#pragma once

#include "mppch.h"

#include "Core.h"
#include "Events/Event.h"

namespace Maple {
	// Abstract representation of a Window
	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Maple Engine",
			unsigned int width = 1280,
			unsigned int height = 720) :
			Title(title), Width(width), Height(height) {}
	};

	// Interface representing a desktop system based window
	// This class needs to be implemented per platform
	class MAPLE_API Window
	{
	public:
		// The signature of the funnction is - return type is void and the parameter is Event - ref
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeight() const = 0;

		// Window attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};
}