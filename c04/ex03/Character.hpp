#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_slots[4];
	AMateria	*_floor[100];
	int			_floorCount;
public:
	Character();
	Character(std::string name);
	Character(const Character &src);
	Character &operator=(const Character &rhs);
	~Character();
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
