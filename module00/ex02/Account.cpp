/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:08:38 by pweinsto          #+#    #+#             */
/*   Updated: 2022/02/19 17:42:02 by pweinsto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::getNbAccounts( void )
{

}

void	Account::_displayTimestamp( void )
{
	//std::time_t	timestamp = std::time(NULL);
	std::cout << "[" << std::time(NULL) << "]";
}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	(void)initial_deposit;
	std::cout << " index:" << std::endl;
}

Account::~Account(void)
{
	std::cout << "destructor" << std::endl;
}

int	main(void)
{
	Account	test = Account(3);

	return (1);
}
