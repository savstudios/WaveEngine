#include <Wave.h>

class Sandbox : public Wave::Application
{
	public:
		Sandbox()
		{

		}

		~Sandbox()
		{

		}
};

Wave::Application* Wave::CreateApplication()
{
	return new Sandbox();
}