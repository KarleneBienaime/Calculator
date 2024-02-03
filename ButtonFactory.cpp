#include "ButtonFactory.h"
#include <string>


wxButton* ButtonFactory::Create_ClearButton(Window* parent)
{
	wxButton* Clear_Button = new wxButton(parent, wxID_ANY, "Clear", wxPoint(295, 130), wxSize(53, 73));
	return Clear_Button;

}

wxButton* ButtonFactory::Create_EqualButton(Window* parent)
{
	wxButton* Equal_Button = new wxButton(parent, wxID_ANY, " = ", wxPoint(205, 390), wxSize(80, 40));
	return Equal_Button;
}

wxButton* ButtonFactory::Create_DecimalButton(Window* parent)
{
	wxButton* Decimal_Button = new wxButton(parent, wxID_ANY, " . ", wxPoint(113, 390), wxSize(80, 40));
	return Decimal_Button;
}

wxButton* ButtonFactory::Create_TRIGButton(Window* parent, std::string trig)
{
	if (trig == "SIN")
	{
		wxButton* SIN_Button = new wxButton(parent, wxID_ANY, "SIN", wxPoint(20, 130), wxSize(80, 30));
		return SIN_Button;
	}
	if (trig == "COS")
	{
		wxButton* COS_Button = new wxButton(parent, wxID_ANY, "COS", wxPoint(113, 130), wxSize(80, 30));
		return COS_Button;
	}
	if (trig == "TAN")
	{
		wxButton* TAN_Button = new wxButton(parent, wxID_ANY, "TAN", wxPoint(205, 130), wxSize(80, 30));
		return TAN_Button;
	}
}

wxButton* ButtonFactory::Create_NegativeButton(Window* parent)
{
	wxButton* Make_Negative_Button = new wxButton(parent, wxID_ANY, " - / +", wxPoint(20, 170), wxSize(80, 30));
	return Make_Negative_Button;
}

wxButton* ButtonFactory::Create_RootButton(Window* parent)
{
	wxButton* Calulate_Root_Button = new wxButton(parent, wxID_ANY, "ROOT", wxPoint(113, 170), wxSize(80, 30));
	return Calulate_Root_Button;
}

wxButton* ButtonFactory::Create_BackSpaceButton(Window* parent)
{
	wxButton* BackSpace_Button = new wxButton(parent, wxID_ANY, "<--", wxPoint(205, 170), wxSize(80, 30));
	return BackSpace_Button;
}

wxButton* ButtonFactory::Create_NumberButton(Window* parent, int Num)
{

	wxButton* Button = nullptr;

	switch (Num)
	{
	case 0:
		Button = new wxButton(parent, 10000, "0", wxPoint(20, 390), wxSize(80, 40));
		break;
	case 1:

		Button = new wxButton(parent, 10001, "1", wxPoint(20, 335), wxSize(80, 40));
		break;
	case 2:
		Button = new wxButton(parent, 10002, "2", wxPoint(113, 335), wxSize(80, 40));
		break;
	case 3:
		Button = new wxButton(parent, 10003, "3", wxPoint(205, 335), wxSize(80, 40));
		break;
	case 4:
		Button = new wxButton(parent, 10004, "4", wxPoint(20, 280), wxSize(80, 40));
		break;
	case 5:
		Button = new wxButton(parent, 10005, "5", wxPoint(113, 280), wxSize(80, 40));
		break;
	case 6:
		Button = new wxButton(parent, 10006, "6", wxPoint(205, 280), wxSize(80, 40));
		break;
	case 7:
		Button = new wxButton(parent, 10007, "7", wxPoint(20, 225), wxSize(80, 40));
		break;
	case 8:
		Button = new wxButton(parent, 10008, "8", wxPoint(113, 225), wxSize(80, 40));
		break;
	case 9:
		Button = new wxButton(parent, 10009, "9", wxPoint(205, 225), wxSize(80, 40));
		break;
	default:

		std::cout << "Only numbers 1 through 9" << std::endl;

	}

	return Button;
}

wxButton* ButtonFactory::CreateAddButton(Window* parent)
{
	Add_Button = new wxButton(parent, wxID_ANY, "+", wxPoint(295, 225), wxSize(50, 40));
	return Add_Button;
}

wxButton* ButtonFactory::CreateSubtractButton(Window* parent)
{
	Subtract_Button = new wxButton(parent, wxID_ANY, "-", wxPoint(295, 280), wxSize(50, 40));
	return Subtract_Button;
}

wxButton* ButtonFactory::CreateDivideButton(Window* parent)
{
	Divide_Button = new wxButton(parent, wxID_ANY, "/", wxPoint(295, 335), wxSize(50, 40));
	return Divide_Button;
}

wxButton* ButtonFactory::CreateMultiplyButton(Window* parent)
{
	Multiply_Button = new wxButton(parent, wxID_ANY, "x", wxPoint(295, 390), wxSize(50, 40));
	return Multiply_Button;
}