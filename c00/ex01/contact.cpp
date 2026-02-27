#include "Contact.hpp"
#include <iomanip>

Contact::Contact() {}

void Contact::_setconinfo(std::string f, std::string l, std::string n, std::string num, std::string s)
{
	fname = f;
	lname = l;
	nickname = n;
	sec = s;
	this->num = num;
}

void Contact::_printinfo()
{
	std::cout << "First Name : " << fname << std::endl;
	std::cout << "Last Name : " << lname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone Number : " << num << std::endl;
	std::cout << "Darkest Secret : " << sec << std::endl;
}

static std::string _truncate(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::_printSummary(int index)
{
	std::cout << std::setw(10) << index << "|"
			  << std::setw(10) << _truncate(fname) << "|"
			  << std::setw(10) << _truncate(lname) << "|"
			  << std::setw(10) << _truncate(nickname) << std::endl;
}

Contact::~Contact() {}