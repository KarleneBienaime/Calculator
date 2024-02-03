#pragma once
#include "wx/wx.h"

class Window;

class App : public wxApp  //wxApp is a class that is part of the wxWidgets library.
{
private:
	Window* window_cpp = nullptr;

public:
	App(); // Create a constructor for the App class.
	virtual bool OnInit(); // OnInit() is a virtual method inherited from wxApp.
};


