#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string	_name;
	Weapon		&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	void	attack(void);
};

#endif /*__HUMANA_H__*/
