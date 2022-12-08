#include <iostream>

int main() 
{
	// If statements - if the condition is true, do something
	// else don't do anything

	int age;

	std::cout << "Enter your age: ";
	std::cin >> age;

	if (age >= 18)
	{
		std::cout << "Welcome to the program";
	}

	if (age < 18 && age >= 0)
	{
		std::cout << "You are not old enough to enter!";
	}

	if (age <= 0)
	{
		std::cout << "You are not even born yet!!";
	}

	return 0;
}