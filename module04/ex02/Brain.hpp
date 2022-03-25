/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:40:41 by pweinsto          #+#    #+#             */
/*   Updated: 2022/03/17 12:06:35 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain
{
	public:
	Brain(void);
	Brain(const Brain &brain);
	~Brain(void);

	Brain	&operator=(const Brain &brain);
	
	private:
	std::string	ideas[100];
	
};

# endif