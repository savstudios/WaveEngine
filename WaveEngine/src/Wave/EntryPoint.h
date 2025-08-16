#pragma once

#ifdef WV_PLATFORM_WINDOWS

extern Wave::Application* Wave::CreateApplication();

int main(int argc, char** argv)
{
	printf("Wave Engine!");

	auto app = Wave::CreateApplication();
	app -> Run();
	delete app;
}

#endif