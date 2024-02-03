#pragma once
#include "wx/wx.h"
#include "Window.h"


class ButtonFactory
{
private:

	wxButton* Clear_Button = nullptr;
	wxButton* Equal_Button = nullptr;
	wxButton* Decimal_Button = nullptr;

	//-----TRIG FUNCTIONS--------

	wxButton* SIN_Button = nullptr;
	wxButton* COS_Button = nullptr;
	wxButton* TAN_Button = nullptr;
	wxButton* Make_Negative_Button = nullptr;
	wxButton* Calulate_Root_Button = nullptr;
	wxButton* BackSpace_Button = nullptr;

	//-----NUMBER BUTTONS--------

	wxButton* Seven_Button = nullptr;
	wxButton* Eight_Button = nullptr;
	wxButton* Nine_Button = nullptr;

	wxButton* Four_Button = nullptr;
	wxButton* Five_Button = nullptr;
	wxButton* Six_Button = nullptr;

	wxButton* One_Button = nullptr;
	wxButton* Two_Button = nullptr;
	wxButton* Three_Button = nullptr;

	wxButton* Zero_Button = nullptr;

	//-----MATH OPERATORS--------

	wxButton* Add_Button = nullptr;
	wxButton* Subtract_Button = nullptr;
	wxButton* Divide_Button = nullptr;
	wxButton* Multiply_Button = nullptr;

public:

	wxButton* Create_ClearButton(Window* parent);
	wxButton* Create_EqualButton(Window* parent);
	wxButton* Create_DecimalButton(Window* parent);

	//-----TRIG FUNCTIONS--------

	wxButton* Create_TRIGButton(Window* parent, std::string trig);

	wxButton* Create_NegativeButton(Window* parent);
	wxButton* Create_RootButton(Window* parent);
	wxButton* Create_BackSpaceButton(Window* parent);

	//-----NUMBER BUTTONS--------

	wxButton* Create_NumberButton(Window* parent, int Num);

	//-----MATH OPERATORS--------

	wxButton* CreateAddButton(Window* parent);
	wxButton* CreateSubtractButton(Window* parent);
	wxButton* CreateDivideButton(Window* parent);
	wxButton* CreateMultiplyButton(Window* parent);
};

