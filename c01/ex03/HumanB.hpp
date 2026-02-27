#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif /*__HUMANB_H__*/
