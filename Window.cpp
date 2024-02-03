#include "App.h"
#include "Window.h"
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"



Window::Window() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(385, 490))
// wxFrame (wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos=wxDefaultPosition, const wxSize &size=wxDefaultSize)
{
	TextBox = new wxTextCtrl(this, 00001,"", wxPoint(20,20), wxSize(325,100)); // text control
	wxFont TxtSize(60, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);
	TextBox->SetFont(TxtSize);

	//-----MAIN BUTTONS-------- 1

	ButtonFactory factory;

	wxButton* Clear_Button = factory.Create_ClearButton(this);
	Clear_Button->SetForegroundColour(wxColor(0, 0, 0));
	Clear_Button->SetBackgroundColour(wxColor(225, 0, 0));
	Clear_Button->Bind(wxEVT_BUTTON, &Window::ClearButtonClicked, this);

	wxButton* Equal_Button = factory.Create_EqualButton(this);
	Equal_Button->Bind(wxEVT_BUTTON, &Window::EqualButtonClicked, this);

	wxButton* Decimal_Button = factory.Create_DecimalButton(this);
	Decimal_Button->Bind(wxEVT_BUTTON, &Window::DecimalButtonClicked, this);

	//-----TRIG FUNCTIONS------- 2

	wxButton* SIN_Button = factory.Create_TRIGButton(this, "SIN");
	SIN_Button->Bind(wxEVT_BUTTON, &Window::SinButtonClicked, this);

	wxButton* COS_Button = factory.Create_TRIGButton(this, "COS");
	COS_Button->Bind(wxEVT_BUTTON, &Window::CosButtonClicked, this);

	wxButton* TAN_Button = factory.Create_TRIGButton(this, "TAN");
	TAN_Button->Bind(wxEVT_BUTTON, &Window::TanButtonClicked, this);

	//-----FUNCTIONS------------ 3

	wxButton* Make_Negative_Button = factory.Create_NegativeButton(this);
	TAN_Button->Bind(wxEVT_BUTTON, &Window::NegativeButtonClicked, this);

	wxButton* Calulate_Root_Button = factory.Create_RootButton(this);
	Calulate_Root_Button->Bind(wxEVT_BUTTON, &Window::RootButtonClicked, this);

	wxButton* BackSpace_Button = factory.Create_BackSpaceButton(this);
	BackSpace_Button->Bind(wxEVT_BUTTON, &Window::BackSpaceButtonClicked, this);

	//-----NUMBER BUTTONS------- 4
	wxButton* Seven_Button = factory.Create_NumberButton(this, 7);
	Seven_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Eight_Button = factory.Create_NumberButton(this, 8);
	Eight_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Nine_Button = factory.Create_NumberButton(this, 9);
	Nine_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Four_Button = factory.Create_NumberButton(this, 4);
	Four_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Five_Button = factory.Create_NumberButton(this, 5);
	Five_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Six_Button = factory.Create_NumberButton(this,6);
	Six_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* One_Button = factory.Create_NumberButton(this, 1);
	One_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Two_Button = factory.Create_NumberButton(this, 2);
	Two_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Three_Button = factory.Create_NumberButton(this,3);
	Three_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	wxButton* Zero_Button = factory.Create_NumberButton(this, 0);
	Zero_Button->Bind(wxEVT_BUTTON, &Window::NumberButtonClicked, this);

	//-----MATH OPERATORS-------- 5

	wxButton* Add_Button = factory.CreateAddButton(this);
	Add_Button->Bind(wxEVT_BUTTON, &Window::AddButtonClicked, this);

	wxButton* Subtract_Button = factory.CreateSubtractButton(this);

	wxButton* Divide_Button = factory.CreateDivideButton(this);
	Divide_Button->Bind(wxEVT_BUTTON, &Window::DivideButtonClicked, this);

	wxButton* Multiply_Button = factory.CreateMultiplyButton(this);
	Multiply_Button->Bind(wxEVT_BUTTON, &Window::MultiplyButtonClicked, this);
}

void Window::ClearButtonClicked(wxCommandEvent & event)
{
	TextBox->Clear();
}

void Window::EqualButtonClicked(wxCommandEvent& event)
{
	auto* CalculatorProcessor = CalculatorProcessor::GetInstance;

	// read text box 
	wxString expression = TextBox->GetValue();

	double result = CalculatorProcessor::GetInstance()->Calculate(expression.ToStdString());

	// return rsult
	TextBox->SetValue(std::to_string(result));
}

void Window::DecimalButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText(".");
}

void Window::SinButtonClicked(wxCommandEvent& event)
{
	wxString content = TextBox->GetValue();
	double value;
	if (content.ToDouble(&value)) {
		double result = sin(value);
		TextBox->SetValue(std::to_string(result));
	}
}

void Window::CosButtonClicked(wxCommandEvent& event)
{
	wxString content = TextBox->GetValue();
	double value;
	if (content.ToDouble(&value)) {
		double result = cos(value);
		TextBox->SetValue(std::to_string(result));
	}
}

void Window::NegativeButtonClicked(wxCommandEvent& event)
{
	wxString currentText = TextBox->GetValue();
	if (!currentText.IsEmpty() && currentText[0] != '-') {
		TextBox->SetValue("-" + currentText);
	}
	else if (!currentText.IsEmpty()) {
		TextBox->SetValue(currentText.Mid(1));
	}
}

void Window::TanButtonClicked(wxCommandEvent& event)
{
	wxString content = TextBox->GetValue();
	double value;
	if (content.ToDouble(&value)) {
		double result = tan(value);
		TextBox->SetValue(std::to_string(result));
	}
}

void Window::RootButtonClicked(wxCommandEvent& event)
{
	wxString content = TextBox->GetValue();
	double value;
	if (content.ToDouble(&value)) {
		double result = sqrt(value);
		TextBox->SetValue(std::to_string(result));
	}
}

void Window::BackSpaceButtonClicked(wxCommandEvent& event)
{
	wxString currentText = TextBox->GetValue();
	if (!currentText.IsEmpty()) {
		TextBox->SetValue(currentText.RemoveLast());
	}
}

void Window::NumberButtonClicked(wxCommandEvent& event)
{
	int buttonId = event.GetId();
	wxString number = wxString::Format("%d", buttonId - 10000);
	TextBox->AppendText(number);
}

void Window::AddButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText("+");	
}

void Window::SubtractButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText("-");
}

void Window::DivideButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText("/");
}

void Window::MultiplyButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText("*");
}

void Window::ModButtonClicked(wxCommandEvent& event)
{
	TextBox->AppendText("%");
}
