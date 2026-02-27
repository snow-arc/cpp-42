#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong animal sound..." << std::endl;
}

std::string WrongAnimal::getType() const { return _type; }
