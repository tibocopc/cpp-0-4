#pragma once

#include <cmath>
#include <iostream>
#include <string>

class Fixed
{
  private:
	int _number;
	static const int _bits = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed &operator=(const Fixed &src);

	bool operator>(const Fixed &n) const;
	bool operator<(const Fixed &n) const;
	bool operator>=(const Fixed &n) const;
	bool operator<=(const Fixed &n) const;
	bool operator==(const Fixed &n) const;
	bool operator!=(const Fixed &n) const;

	Fixed operator+(const Fixed &n);
	Fixed operator-(const Fixed &n);
	Fixed operator*(const Fixed &n);
	Fixed operator/(const Fixed &n);

	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed min(Fixed &nb1, Fixed &nb2);
	static const Fixed min(const Fixed &nb1, const Fixed &nb2);

	static Fixed max(Fixed &nb1, Fixed &nb2);
	static const Fixed max(const Fixed &nb1, const Fixed &nb2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
