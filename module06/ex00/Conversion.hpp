/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:51:10 by pweinsto          #+#    #+#             */
/*   Updated: 2022/04/06 19:22:22 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>

class	Conversion
{
	public:
	Conversion(void);
	Conversion(std::string literal);
	Conversion(const Conversion &copy);
	~Conversion(void);

	Conversion &operator=(const Conversion &copy);

	char	get_c(void) const;
	int		get_i(void) const;
	float	get_f(void) const;
	double	get_d(void) const;

	bool	is_char(std::string literal);
	bool	is_int(std::string literal);
	bool	is_float(std::string literal);
	bool	is_double(std::string literal);

	void	convert_from_char(std::string literal);
	void	convert_from_int(std::string literal);
	void	convert_from_float(std::string literal);
	void	convert_from_double(std::string literal);

	void	set_neg_inf(void);
	void	set_pos_inf(void);
	void	set_nan(void);

	void	convert(std::string literal);

	private:
	std::string	literal;
	char	c;
	int		i;
	float	f;
	double	d;
};

std::ostream	&operator<<(std::ostream &out, const Conversion &conversion);

# endif