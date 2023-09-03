/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:36:55 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:16:31 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice has been constructed" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice& rhs)
{
	*this = rhs;
}

Ice&	Ice::operator=(const Ice& rhs)
{
	type = rhs.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *ptr;

	ptr = new Ice();
	return (ptr);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice has been destructed" << std::endl;
}
