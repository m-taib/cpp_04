/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:22:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:48:47 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Cat has been constructed" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Cat has been destructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& rhs)
{
	type = rhs.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& rhs)
{
	type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meowww" << std::endl;
}
