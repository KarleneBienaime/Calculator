#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
private:

	wxFont TxtSize;

public:
	Window();

	wxTextCtrl* TextBox = nullptr;

	void ClearButtonClicked(wxCommandEvent& event);
	void EqualButtonClicked(wxCommandEvent& event);
	void DecimalButtonClicked(wxCommandEvent& event);

	//-----TRIG FUNCTIONS--------

	void SinButtonClicked(wxCommandEvent& event);
	void CosButtonClicked(wxCommandEvent& event);
	void TanButtonClicked(wxCommandEvent& event);
	void NegativeButtonClicked(wxCommandEvent& event);
	void RootButtonClicked(wxCommandEvent& event);
	void BackSpaceButtonClicked(wxCommandEvent& event);

	//-----NUMBER BUTTONS--------

	void NumberButtonClicked(wxCommandEvent& event);

	//-----MATH OPERATORS--------

	void AddButtonClicked(wxCommandEvent& event);
	void SubtractButtonClicked(wxCommandEvent& event);
	void DivideButtonClicked(wxCommandEvent& event);
	void MultiplyButtonClicked(wxCommandEvent& event);
	void ModButtonClicked(wxCommandEvent& event);
};

