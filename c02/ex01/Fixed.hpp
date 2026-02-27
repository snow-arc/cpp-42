#pragma once
#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_bits = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &src);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, const Fixed &rhs);

#endif
