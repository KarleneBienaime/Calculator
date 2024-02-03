#include "App.h"
#include "Window.h"

wxIMPLEMENT_APP(App); // starting point

App::App()
{

}

bool App::OnInit() //opens a window
{
	Window* window_cpp = new Window();
	window_cpp->Show();
	return true;
}

