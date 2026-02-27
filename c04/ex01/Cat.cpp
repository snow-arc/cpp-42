#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain() const { return _brain; }
