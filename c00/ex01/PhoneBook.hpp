#pragma once

#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		count;
	int		oldest;
public:
	PhoneBook();
	void	_add();
	void	_search();
	~PhoneBook();
};

#endif /*__PHONEBOOK_H__*/