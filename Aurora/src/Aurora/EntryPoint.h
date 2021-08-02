#pragma once

#ifdef AU_PLATFORM_WINDOWS
	
	extern Aurora::Application* Aurora::CreateApplication();
	
	int main(int argc, char** argv) {
		auto app = Aurora::CreateApplication();
		app->Run();
		delete app;
	}

#endif