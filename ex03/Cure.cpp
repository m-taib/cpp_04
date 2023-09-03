/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:39:26 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:16:42 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure has been constructed" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& rhs)
{
	*this = rhs;
}

Cure&	Cure::operator=(const Cure& rhs)
{
	type = rhs.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *ptr;

	ptr = new Cure();
	return (ptr);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *";
}

Cure::~Cure()
{
	std::cout << "Cure has been destructed" << std::endl;
}
