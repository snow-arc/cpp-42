#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}
Fixed::Fixed(const int n) : _value(n << _bits) {}
Fixed::Fixed(const float n) : _value(roundf(n * (1 << _bits))) {}
Fixed::Fixed(const Fixed &src) : _value(src._value) {}
Fixed &Fixed::operator=(const Fixed &rhs) { if (this != &rhs) _value = rhs._value; return *this; }
Fixed::~Fixed() {}

bool Fixed::operator>(const Fixed &rhs) const { return _value > rhs._value; }
bool Fixed::operator<(const Fixed &rhs) const { return _value < rhs._value; }
bool Fixed::operator>=(const Fixed &rhs) const { return _value >= rhs._value; }
bool Fixed::operator<=(const Fixed &rhs) const { return _value <= rhs._value; }
bool Fixed::operator==(const Fixed &rhs) const { return _value == rhs._value; }
bool Fixed::operator!=(const Fixed &rhs) const { return _value != rhs._value; }

Fixed Fixed::operator+(const Fixed &rhs) const { Fixed r; r._value = _value + rhs._value; return r; }
Fixed Fixed::operator-(const Fixed &rhs) const { Fixed r; r._value = _value - rhs._value; return r; }
Fixed Fixed::operator*(const Fixed &rhs) const { Fixed r; r._value = (int)((long long)_value * rhs._value >> _bits); return r; }
Fixed Fixed::operator/(const Fixed &rhs) const { Fixed r; r._value = (int)(((long long)_value << _bits) / rhs._value); return r; }

Fixed &Fixed::operator++() { _value++; return *this; }
Fixed Fixed::operator++(int) { Fixed t(*this); _value++; return t; }
Fixed &Fixed::operator--() { _value--; return *this; }
Fixed Fixed::operator--(int) { Fixed t(*this); _value--; return t; }

float Fixed::toFloat(void) const { return (float)_value / (float)(1 << _bits); }
int Fixed::toInt(void) const { return _value >> _bits; }
int Fixed::getRawBits(void) const { return _value; }
void Fixed::setRawBits(int const raw) { _value = raw; }

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }

std::ostream &operator<<(std::ostream &o, const Fixed &rhs) { o << rhs.toFloat(); return o; }
