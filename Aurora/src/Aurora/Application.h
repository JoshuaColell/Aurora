#pragma once

#include "Core.h"

#include "Window.h"
#include "Aurora/LayerStack.h"
#include "Events/Event.h"
#include "Aurora/Events/ApplicationEvent.h"

namespace Aurora {

	class AURORA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// This needs to be defined in the client
	Application* CreateApplication();

}