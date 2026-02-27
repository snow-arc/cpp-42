#pragma once
#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>
#include <iostream>

class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	~Brain();
};

#endif
