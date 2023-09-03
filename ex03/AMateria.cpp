/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:24:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:17:25 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria has been constructed" << std::endl;
	type = "unkown";
}

AMateria::AMateria(const std::string& type)
{
	std::cout << "AMateria has been constructed" << std::endl;
	this->type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria has been destructed" << std::endl;
}

AMateria::AMateria(const AMateria& rhs)
{
	(void)rhs;
}

AMateria&	AMateria::operator=(const AMateria& rhs)
{
	return (*this);
}

void	AMateria::use(ICharacter& target)
{

}
