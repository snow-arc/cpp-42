#pragma once
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	~Cat();
	void	makeSound() const;
	Brain	*getBrain() const;
};

#endif
