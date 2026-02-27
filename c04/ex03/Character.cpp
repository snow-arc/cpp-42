#include "Character.hpp"

Character::Character() : _name("default"), _floorCount(0)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

Character::Character(std::string name) : _name(name), _floorCount(0)
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

Character::Character(const Character &src) : _name(src._name), _floorCount(0)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._slots[i])
			_slots[i] = src._slots[i]->clone();
		else
			_slots[i] = NULL;
	}
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			delete _slots[i];
			if (rhs._slots[i])
				_slots[i] = rhs._slots[i]->clone();
			else
				_slots[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _slots[i];
	for (int i = 0; i < _floorCount; i++)
		delete _floor[i];
}

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!_slots[i])
		{
			_slots[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_slots[idx])
		return;
	if (_floorCount < 100)
		_floor[_floorCount++] = _slots[idx];
	_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_slots[idx])
		return;
	_slots[idx]->use(target);
}
