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

        CalculatorProcessor* calc = CalculatorProcessor::GetInstance();

        TEST_METHOD(TestAddition)
        {
            double result = calc->Calculate("23+");
            Assert::AreEqual(5.0, result);
        }

        TEST_METHOD(TestSubtraction)
        {
            double result = calc->Calculate("54-");
            Assert::AreEqual(1.0, result);
        }

        TEST_METHOD(TestMultiplication)
        {
            double result = calc->Calculate("34*");
            Assert::AreEqual(12.0, result);
        }

        TEST_METHOD(TestDivision)
        {
            double result = calc->Calculate("84/");
            Assert::AreEqual(2.0, result);
        }

        TEST_METHOD(TestNegativeNumbers)
        {
            double result = calc->Calculate("-5+3+");
            Assert::AreEqual(-2.0, result);
        }

        TEST_METHOD(TestSingleDigit)
        {
            double result = calc->Calculate("3");
            Assert::AreEqual(3.0, result);
        }

        TEST_METHOD(TestSubtractionEqualsZero)
        {
            double result = calc->Calculate("33-"); 
            Assert::AreEqual(0.0, result);
        }

        TEST_METHOD(TestMultiplicationByOne)
        {
            double result = calc->Calculate("31*");
            Assert::AreEqual(3.0, result);
        }

        TEST_METHOD(TestMultiplicationResultingInZero) 
        {
            double result = calc->Calculate("30*");
            Assert::AreEqual(0.0, result);
        }
    };
}