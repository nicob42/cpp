#include "Fixed.hpp"

int		Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

Fixed &	Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = src.value;
	return *this;
}

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed (const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	value = src.value;
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
}
