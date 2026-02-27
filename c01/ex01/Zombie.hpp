#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	Zombie(std::string name);
	void	setName(std::string name);
	void	announce(void);
	~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif /*__ZOMBIE_H__*/
