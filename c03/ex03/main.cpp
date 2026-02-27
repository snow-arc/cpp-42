#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap d("Diamond");

	d.whoAmI();
	d.attack("target");
	d.takeDamage(50);
	d.beRepaired(20);
	d.guardGate();
	d.highFivesGuys();
	return 0;
}
