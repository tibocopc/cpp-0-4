#include "Fixed.hpp"

Fixed::Fixed() : _number(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int nb)
{
	setRawBits(nb << _bits);
}
Fixed::Fixed(const float nb)
{
	setRawBits(roundf(nb * (1 << _bits)));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	this->_number = src.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_number);
}

void Fixed::setRawBits(int const raw)
{
	_number = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_number / (1 << _bits));
}
int Fixed::toInt(void) const
{
	return (roundf(this->_number / (1 << _bits)));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	return (os << fixed.toFloat());
}

bool Fixed::operator>(const Fixed &n) const
{
	return (this->getRawBits() > n.getRawBits());
}

bool Fixed::operator<(const Fixed &n) const
{
	return (this->getRawBits() < n.getRawBits());
}

bool Fixed::operator>=(const Fixed &n) const
{
	return (this->getRawBits() >= n.getRawBits());
}

bool Fixed::operator<=(const Fixed &n) const
{
	return (this->getRawBits() <= n.getRawBits());
}

bool Fixed::operator==(const Fixed &n) const
{
	return (this->getRawBits() == n.getRawBits());
}

bool Fixed::operator!=(const Fixed &n) const
{
	return (this->getRawBits() != n.getRawBits());
}

Fixed Fixed::operator+(const Fixed &n)
{
	return (this->toFloat() + n.toFloat());
}

Fixed Fixed::operator-(const Fixed &n)
{
	return (this->toFloat() - n.toFloat());
}

Fixed Fixed::operator*(const Fixed &n)
{
	return (this->toFloat() * n.toFloat());
}

Fixed Fixed::operator/(const Fixed &n)
{
	return (this->toFloat() / n.toFloat());
}

Fixed &Fixed::operator++()
{
	this->_number++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->_number--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_number++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_number--;
	return (tmp);
}

Fixed Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb2);
	else
		return (nb1);
}

const Fixed Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb2);
	else
		return (nb1);
}

Fixed Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb2);
	else
		return (nb1);
}

const Fixed Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb2);
	else
		return (nb1);
}