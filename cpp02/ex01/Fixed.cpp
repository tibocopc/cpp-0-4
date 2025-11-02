#include "Fixed.hpp"

Fixed::Fixed() : _number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nb << _bits);
}
Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(nb * (1 << _bits)));
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
