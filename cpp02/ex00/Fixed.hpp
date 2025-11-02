#pragma once

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
	Fixed &operator=(const Fixed &src);

	int getRawBits() const;
	void setRawBits(int const raw);
};
