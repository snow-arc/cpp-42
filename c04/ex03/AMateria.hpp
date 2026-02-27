#pragma once
#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &src);
	AMateria &operator=(const AMateria &rhs);
	virtual ~AMateria();
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
