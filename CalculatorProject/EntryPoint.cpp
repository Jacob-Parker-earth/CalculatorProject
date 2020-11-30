// pre-processor
// tell compiler to do certain actions before the rest of the code is done.
// Include will append the source of an included file into the current file.
#include <iostream>
#include <string>

// declarations
// declare any functions which are used in this file and are located elsewhere.
void ErrorRecovery();
void Introduction();
int Addition(int a, int b);
int Subtraction(int a, int b);
int Multiplication(int a, int b);
int Division(int a, int b);
int Modulo(int a, int b);
int GetPlayerNum(int a);
void DisplayChoices();

void main() {

	int a = 0;
	int b = 0;
	int operationSelection;
	bool stageOne = true;
	bool stageTwo = false;
	bool stageThree = false;
	bool stageFour = false;
	bool programRunning = true;
	std::string playerEndChoice;

// Stage One
	if (stageOne == true) {
		// print Introductory Text upon first run
		Introduction();
		stageTwo = true;
	}
	stageOne = false;

// Stage Two
	if (stageTwo == true) {
		while (programRunning == true) {
			DisplayChoices();
			std::cin >> operationSelection;

			switch (operationSelection) {

			case 1:
				// TODO: check over a, b functionality for GetPlayNum
				a = GetPlayerNum(a);
				b = GetPlayerNum(b);
				std::cout << "\nAnswer:" << Addition(a, b) << std::endl;
				stageThree = true;
				break;

			case 2:
				a = GetPlayerNum(a);
				b = GetPlayerNum(b);
				std::cout << "\nAnswer:" << Subtraction(a, b) << std::endl;
				stageThree = true;
				break;

			case 3:
				a = GetPlayerNum(a);
				b = GetPlayerNum(b);
				std::cout << "\nAnswer:" << Multiplication(a, b) << std::endl;
				stageThree = true;
				break;

			case 4:
				a = GetPlayerNum(a);
				b = GetPlayerNum(b);
				std::cout << "\nAnswer:" << Division(a, b) << std::endl;
				stageThree = true;
				break;

			case 5:
				a = GetPlayerNum(a);
				b = GetPlayerNum(b);
				std::cout << "\nAnswer:" << Modulo(a, b) << std::endl;
				stageThree = true;
				break;

			default:
				ErrorRecovery();
				break;
			}
			programRunning = false;
		}
	}
	stageTwo = false;

// STAGE THREE
	if (stageThree == true) {
		std::cout << "\n\nAnswer Recieved, Do you require furthur calculation?(y/n)" << std::endl;
		std::cout << "Selection... ";
		std::cin >> playerEndChoice;
		//TODO: check over comparison for user entered character, as of now it just crashes.
		if (playerEndChoice == "y" || playerEndChoice == "Y") {
			programRunning = true;
		}
		else
			stageFour = true;
	}

// Stage Four
	if (stageFour == true) {
		std::cout << "\n\nExiting program...\n" << std::endl;
		return;
	}

	return;
}