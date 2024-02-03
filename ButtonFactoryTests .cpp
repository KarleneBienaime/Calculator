#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorAppTests
{
    TEST_CLASS(CalculatorAppTests)
    {
    public:

        void testCreateClearButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_ClearButton(parent);

            if (button != nullptr && button->GetLabel() == "Clear") {
                std::cout << "testCreateClearButton: PASS\n";
            }
            else {
                std::cout << "testCreateClearButton: FAIL\n";
            }
        }

        void testCreateEqualButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_EqualButton(parent);

            if (button != nullptr && button->GetLabel() == " = ") {
                std::cout << "testCreateEqualButton: PASS\n";
            }
            else {
                std::cout << "testCreateEqualButton: FAIL\n";
            }
        }

        void testCreateDecimalButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_DecimalButton(parent);

            if (button != nullptr && button->GetLabel() == " . ") {
                std::cout << "testCreateDecimalButton: PASS\n";
            }
            else {
                std::cout << "testCreateDecimalButton: FAIL\n";
            }
        }

        void testCreateTrigButtonSIN() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_TRIGButton(parent, "SIN");

            if (button != nullptr && button->GetLabel() == "SIN") {
                std::cout << "testCreateTrigButtonSIN: PASS\n";
            }
            else {
                std::cout << "testCreateTrigButtonSIN: FAIL\n";
            }
        }

        void testCreateTrigButtonCOS() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_TRIGButton(parent, "COS");

            if (button != nullptr && button->GetLabel() == "COS") {
                std::cout << "testCreateTrigButtonCOS: PASS\n";
            }
            else {
                std::cout << "testCreateTrigButtonCOS: FAIL\n";
            }
        }

        void testCreateTrigButtonTAN() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_TRIGButton(parent, "TAN");

            if (button != nullptr && button->GetLabel() == "TAN") {
                std::cout << "testCreateTrigButtonTAN: PASS\n";
            }
            else {
                std::cout << "testCreateTrigButtonTAN: FAIL\n";
            }
        }

        void testCreateNegativeButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_NegativeButton(parent);

            if (button != nullptr && button->GetLabel() == " - / +") {
                std::cout << "testCreateNegativeButton: PASS\n";
            }
            else {
                std::cout << "testCreateNegativeButton: FAIL\n";
            }
        }

        void testCreateRootButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_RootButton(parent);

            if (button != nullptr && button->GetLabel() == "ROOT") {
                std::cout << "testCreateRootButton: PASS\n";
            }
            else {
                std::cout << "testCreateRootButton: FAIL\n";
            }
        }

        void testCreateBackSpaceButton() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_BackSpaceButton(parent);

            if (button != nullptr && button->GetLabel() == "<--") {
                std::cout << "testCreateBackSpaceButton: PASS\n";
            }
            else {
                std::cout << "testCreateBackSpaceButton: FAIL\n";
            }
        }

        void testCreateNumberButton0() {
            ButtonFactory factory;
            Window* parent = nullptr;
            wxButton* button = factory.Create_NumberButton(parent, 0);

            if (button != nullptr && button->GetLabel() == "0") {
                std::cout << "testCreateNumberButton0: PASS\n";
            }
            else {
                std::cout << "testCreateNumberButton0: FAIL\n";
            }
        }

    };
}