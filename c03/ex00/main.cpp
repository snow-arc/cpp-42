#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Alpha");
	ClapTrap b("Beta");

	a.attack("Beta");
	b.takeDamage(0);
	b.beRepaired(5);
	a.takeDamage(10);
	a.attack("Beta");
	return 0;
}
