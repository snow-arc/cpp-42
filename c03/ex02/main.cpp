#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Alpha");
	FragTrap b("Beta");

	a.attack("Beta");
	b.takeDamage(20);
	b.highFivesGuys();
	a.guardGate();
	return 0;
}
