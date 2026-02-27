#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType() const { return _type; }
