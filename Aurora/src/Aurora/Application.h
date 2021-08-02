#pragma once

#include "Core.h"

namespace Aurora {

	class AURORA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// This needs to be defined in the client
	Application* CreateApplication();

}