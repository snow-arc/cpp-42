#pragma once
#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_templates[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource &operator=(const MateriaSource &rhs);
	~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif
