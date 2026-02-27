#pragma once
#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	~Dog();
	void makeSound() const;
};

#endif
