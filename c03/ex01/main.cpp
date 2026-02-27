#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Alpha");

	a.attack("target");
	a.takeDamage(30);
	a.beRepaired(10);
	a.guardGate();
	return 0;
}
