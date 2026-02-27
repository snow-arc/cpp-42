#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();
	virtual void	makeSound() const = 0;
	std::string		getType() const;
};

#endif
