/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:26:42 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:18:20 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal has been constructed" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal has been destructed" << std::endl;
}

AAnimal::AAnimal(const AAnimal& rhs)
{
	
}

AAnimal&		AAnimal::operator=(const AAnimal& rhs)
{
	return (*this);
}

void	AAnimal::makeSound(void)
{

}
