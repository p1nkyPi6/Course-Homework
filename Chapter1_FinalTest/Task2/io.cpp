#include <iostream>

int readNumber()
{
	int userNumber;

	std::cout << "Enter your integer number: ";
	std::cin >> userNumber;

	return userNumber;
}

void writeAnswer(int answer)
{
	std::cout << "Answer: " << answer << std::endl;
}