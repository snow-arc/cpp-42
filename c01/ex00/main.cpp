#include "Zombie.hpp"

int main()
{
	// Heap zombie - lives until we delete it
	Zombie *z = newZombie("HeapZombie");
	z->announce();
	delete z;

	// Stack zombie - destroyed at end of scope
	randomChump("StackZombie");

	return 0;
}
