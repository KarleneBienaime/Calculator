#pragma once
#include <string>

class CalculatorProcessor
{
protected:
	static CalculatorProcessor* instance;
	CalculatorProcessor();

public:
	CalculatorProcessor(CalculatorProcessor const&) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor const&) = delete;

	static CalculatorProcessor* GetInstance();
	~CalculatorProcessor();

	double Calculate(const std::string& expression);
};