/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:26:42 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:17:45 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been constructed" << std::endl;
	type = "unkown";
}

Animal::~Animal()
{
	std::cout << "Animal has been destructed" << std::endl;
}

Animal::Animal(const Animal& rhs)
{
	*this = rhs;
}

Animal&		Animal::operator=(const Animal& rhs)
{
	type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{

}
std::string		Animal::getType() const
{
	return (type);
}
