#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	std::cout << "\n--- Array test ---" << std::endl;
	Animal* animals[4];
	for (int k = 0; k < 4; k++)
	{
		if (k < 2)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	for (int k = 0; k < 4; k++)
		delete animals[k];

	std::cout << "\n--- Deep copy test ---" << std::endl;
	Dog dog1;
	dog1.getBrain()->ideas[0] = "chase ball";
	Dog dog2(dog1);
	std::cout << "dog1 brain: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 brain: " << dog2.getBrain()->ideas[0] << std::endl;
	dog2.getBrain()->ideas[0] = "sleep";
	std::cout << "After modifying dog2:" << std::endl;
	std::cout << "dog1 brain: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "dog2 brain: " << dog2.getBrain()->ideas[0] << std::endl;

	return 0;
}
