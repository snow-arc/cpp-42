#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain() const { return _brain; }
