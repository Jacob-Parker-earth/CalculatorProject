#include <iostream>

int Addition(int a, int b) {
	return(a+b);
}

int Subtraction(int a, int b) {
	return(a-b);
}
int Multiplication(int a, int b) {
	return(a*b);
}

int Division(int a, int b) {
	return(a/b);
}

int Modulo(int a, int b) {
	return(a%b);
}

// prompt user for first and second operand of chosen operation.
int GetPlayerNum(int a, int b) {
	std::cout << "\nPlease enter first operand: ";
	std::cin >> a;
	std::cout << "\nPlease enter second operand: ";
	std::cin >> b;
	return(a, b);
}