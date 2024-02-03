#include "CalculatorProcessor.h"
#include <sstream>
#include <iostream>
#include <vector>

CalculatorProcessor* CalculatorProcessor::instance = nullptr;

CalculatorProcessor::CalculatorProcessor()
{
    //empty
}

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
    if (instance == nullptr) 
    {
        instance = new CalculatorProcessor();
    }
    return instance;
}

double CalculatorProcessor::Calculate(const std::string& expression)
{
        std::vector<int32_t> stack;

        for (auto c : expression)
        {
            std::cout << "c = " << c << std::endl;

            if (c >= '0' && c <= '9') {
                int32_t n = c - '0';
                stack.push_back(n);
            }
            else
            {
                auto b = stack.back();
                stack.pop_back();
                auto a = stack.back();
                stack.pop_back();

                if (c == '+') {
                    stack.push_back(a + b);
                }
                else if (c == '-') {
                    stack.push_back(a - b);
                }
                else if (c == '*') {
                    stack.push_back(a * b);
                }
                else if (c == '/') {
                    stack.push_back(a / b);
                }
                else {
                    std::cout << "WTF is a " << c << "?" << std::endl;
                    return 0;
                }
            }
        }

        auto result = stack.back();
        return result;

}

CalculatorProcessor::~CalculatorProcessor() 
{
    // empty
}