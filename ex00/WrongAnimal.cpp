/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:26:42 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:33:31 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Animal oas been constructed" << std::endl;
	type = "unkown";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal has been destructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
{
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal& rhs)
{
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{

}
std::string		WrongAnimal::getType() const
{
	return (type);
}
