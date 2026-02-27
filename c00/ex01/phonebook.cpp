#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook() : count(0), oldest(0) {}

static std::string _getinput(std::string prompt)
{
	std::string input;
	while (input.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(0);
	}
	return input;
}

void PhoneBook::_add()
{
	std::string f = _getinput("First Name : ");
	std::string l = _getinput("Last Name : ");
	std::string n = _getinput("Nickname : ");
	std::string p = _getinput("Phone Number : ");
	std::string s = _getinput("Darkest Secret : ");

	int i = (count < 8) ? count : oldest;
	contacts[i]._setconinfo(f, l, n, p, s);
	if (count < 8)
		count++;
	oldest = (oldest + 1) % 8;
}

void PhoneBook::_search()
{
	if (count == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < count; i++)
		contacts[i]._printSummary(i);
	std::cout << "Enter index: ";
	std::string input;
	if (!std::getline(std::cin, input))
		return;
	if (input.length() != 1 || input[0] < '0' || input[0] > '7')
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	int idx = input[0] - '0';
	if (idx >= count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	contacts[idx]._printinfo();
}

PhoneBook::~PhoneBook() {}
