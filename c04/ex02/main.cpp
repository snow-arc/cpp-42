#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal a; // This would not compile - abstract class

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();

	delete j;
	delete i;

	std::cout << "\n--- Deep copy test ---" << std::endl;
	Dog dog1;
	dog1.getBrain()->ideas[0] = "fetch";
	Dog dog2(dog1);
	dog2.getBrain()->ideas[0] = "nap";
	std::cout << "dog1: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2: " << dog2.getBrain()->ideas[0] << std::endl;

	return 0;
}
