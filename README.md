# Calculator Application

This is a simple calculator application built using C++ and wxWidgets. 
It provides a graphical user interface for basic arithmetic operations, trigonometric functions, and other mathematical operations.

## Features

- Basic arithmetic operations: addition, subtraction, multiplication, division
- Trigonometric functions: sin, cos, tan
- Other mathematical operations: square root, negation
- Clear and backspace functionality
- Decimal point support

## Dependencies

- C++
- wxWidgets library

## How to Build and Run

1. Ensure you have wxWidgets installed on your system.
2. Clone this repository to your local machine.
3. Open the project in your preferred C++ IDE that supports wxWidgets.
4. Build the project.
5. Run the compiled executable.

## Usage

- Use the number buttons (0-9) to input numbers.
- Use the operation buttons (+, -, *, /) to perform basic arithmetic.
- Use the "SIN", "COS", and "TAN" buttons for trigonometric functions.
- Use the "√" button to calculate square root.
- Use the "+/-" button to negate a number.
- Use the "." button to input decimal points.
- Use the "C" button to clear the input.
- Use the "⌫" (backspace) button to delete the last character.
- Press "=" to calculate the result.

## Project Structure

- `Window.cpp`: Contains the main window implementation and button event handlers.
- `App.h`: Contains the wxApp-derived class for the application.
- `ButtonFactory.h`: Contains factory methods for creating various calculator buttons.
- `CalculatorProcessor.h`: Contains the logic for processing calculations.
