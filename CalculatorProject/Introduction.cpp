#include <iostream>

// The Introduction splash for when the user boots the program for the first time.
void Introduction() {
	std::cout << std::flush;
	std::cout << "Welcome to nDigit calculator" << std::endl;
	std::cout << "Software License: MIT license." << std::endl;
	std::cout << "	This program is a console based calculator, built to make an easy and extendable selection of operations." << std::endl;
	std::cout << "\nPlease Select the type of operation you wish to use:\n" << std::endl;
	return;
}

void DisplayChoices() {
	// display choices for user to make
	std::cout << "1). Addition" << std::endl;
	std::cout << "2). Subtraction" << std::endl;
	std::cout << "3). Multiplication" << std::endl;
	std::cout << "4). Division" << std::endl;
	std::cout << "5). Modulo\n" << std::endl;
	std::cout << "\nUser Choice... ";
}