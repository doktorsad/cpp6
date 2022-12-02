#include <iostream>
#include <string>
#include "Mathematical_functions.h"

void enter_in(const std::string& str, int &num) {
	std::cout << "Enter " << str << " number: ";
	std::cin >> num;
}

int enter_choice() {
	int choice;
	std::cout << "Select an operation (1 - addition, 2 - subtraction, " <<
		"3 - multiplication, 4 - division, 5 - exponentiation): ";
	std::cin >> choice;
	return choice;
}

int print(const int &func, const int &x, const int &y) {
	switch (func) {
	case 1: std::cout << x << " + " << y << " = " << sum(x, y); break;
	case 2: std::cout << x << " - " << y << " = " << sub(x, y); break;
	case 3: std::cout << x << " * " << y << " = " << multi(x, y); break;
	case 4: std::cout << x << " / " << y << " = " << divis(x, y); break;
	case 5: std::cout << x << " raise to the power of 2 " << " = " << exponent(x); break;
	}
	exit(0);
}


int main() {
	int num_one = 0, num_two = 0;
	std::string str_one{ "first" };
	std::string str_two{ "second" };
	enter_in(str_one, num_one);
	enter_in(str_two, num_two);
	print(enter_choice(), num_one, num_two);
	return 0;
}