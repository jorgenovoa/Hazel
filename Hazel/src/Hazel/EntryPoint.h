#pragma once
#include "../Hazel.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif