#pragma once

#include "crpch.h"

#include "Core.h"
#include "Event\Event.h"

namespace Craft {

	class CRAFT_API Application
	{
	public:
		Application();
		virtual ~Application();

		virtual void Run();
	};

	Application* CreateApplication();
}