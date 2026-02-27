#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}
