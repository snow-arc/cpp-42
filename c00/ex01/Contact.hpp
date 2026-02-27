#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__
#include <string>
#include <iostream>

class Contact
{
private:
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string sec;
	std::string	num;
public:
	Contact();
	void	_setconinfo(std::string f, std::string l, std::string n, std::string num, std::string s);
	void	_printinfo();
	void	_printSummary(int index);
	~Contact();
};

#endif /*__CONTACT_H__*/