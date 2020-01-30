#pragma once

#ifdef MP_PLATFORM_WINDOWS

// A function which we will define somewhere else, which returns that
// application for us!
// Maple::CreateApplication() should be implemented in Client!
extern Maple::Application* Maple::CreateApplication();

int main(int argc, char** argv) {
	Maple::Log::Init();
	auto app = Maple::CreateApplication();
	app->Run();
	delete app;
}

#endif