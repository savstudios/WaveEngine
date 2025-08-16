#pragma once

#include "Core.h"

namespace Wave {

	class WAVE_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();

}
