/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:52:32 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/02 12:26:49 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>

class	Karen
{
	public:
	void	complain(std::string level);

	Karen(void);
	~Karen(void);

	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	filter(void);
};

# endif