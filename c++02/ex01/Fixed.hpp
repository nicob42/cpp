#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed {
public:
	Fixed (void);
	Fixed (int val);
	Fixed (float val);
	Fixed (const Fixed& src);
	~Fixed (void);
	Fixed &		operator=(const Fixed& src);
	float		toFloat(void) const;
	int			toInt(void) const;
	int			getRawBits(void);
	void		setRawBits(const int raw);
private:
	int					value;
	static const int	fractional = 8;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);

#endif