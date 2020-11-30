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
int GetPlayerNum(int a) {
	std::cout << "\nPlease enter operand: ";
	std::cin >> a;
	return(a);
}