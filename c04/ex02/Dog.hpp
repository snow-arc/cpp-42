#pragma once
#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	~Dog();
	void	makeSound() const;
	Brain	*getBrain() const;
};

#endif
