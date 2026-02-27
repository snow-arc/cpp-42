#pragma once
#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &src);
	Cure &operator=(const Cure &rhs);
	~Cure();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
