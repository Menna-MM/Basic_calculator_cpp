#include <iostream>
#include <cmath>

double getuserinput() {
	double num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	return num;
}

double useroperation(double a, double b, char op) {
	switch (op) {
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': 
		if (b == 0) {

			std::cout << "Cannot divide by zero" << "\n";
		}
		else;
		return a / b;
	case '%': 
		if (b == 0) {

			std::cout << "Cannot Modulo by zero" << "\n";
		}
		else;
			return fmod(a, b);
	default:
		std::cout << "Invalid operator" << std::endl;
		return 0;
	}
}

int main() {
	double num1 = getuserinput();
	double num2 = getuserinput();
	char op;
	std::cout << "Enter an operator (+, -, *, /, %): ";
	std::cin >> op;
	double result = useroperation(num1, num2, op);
	std::cout << "Result: " << result << std::endl;
	return 0;
}