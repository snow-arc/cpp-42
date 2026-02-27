#pragma once
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	~Cat();
	void makeSound() const;
};

#endif
