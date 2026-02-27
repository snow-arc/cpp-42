#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}
