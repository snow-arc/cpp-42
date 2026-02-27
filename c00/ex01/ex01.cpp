#include "PhoneBook.hpp"

int main()
{
	PhoneBook	pb;
	std::string	cmd;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
			pb._add();
		else if (cmd == "SEARCH")
			pb._search();
		else if (cmd == "EXIT")
			break;
	}
	return 0;
}