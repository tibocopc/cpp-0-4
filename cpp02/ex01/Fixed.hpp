#pragma once

#include <iostream>
#include <string>
#include <cmath>

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

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);