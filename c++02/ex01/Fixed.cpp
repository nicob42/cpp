/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cclaude <cclaude@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 19:19:23 by cclaude           #+#    #+#             */
/*   Updated: 2020/04/17 16:21:48 by cclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int				Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void			Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

int				Fixed::toInt(void) const
{
	return (value / 256);
}

float			Fixed::toFloat(void) const
{
	return ((float)value / 256);
}

Fixed &			Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignment operator called" << std::endl;
	value = src.value;
	return *this;
}

std::ostream &	operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return (os);
}

Fixed::Fixed (void)
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed (int val)
{
	std::cout << "Int constructor called" << std::endl;
	value = val * 256;
}

Fixed::Fixed (float val)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(val * 256);
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
