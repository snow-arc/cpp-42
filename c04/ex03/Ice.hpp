#pragma once
#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &src);
	Ice &operator=(const Ice &rhs);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
