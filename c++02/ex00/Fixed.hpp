#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed (void);
	Fixed (const Fixed& src);
	~Fixed (void);
	Fixed &	operator=(const Fixed& src);
	int		getRawBits(void);
	void	setRawBits(const int raw);
private:
	int					value;
	static const int	fractional = 8;
};

#endif