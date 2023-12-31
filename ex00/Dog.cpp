/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:24:33 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:21:16 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog has been constructed" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed" << std::endl;
}

Dog::Dog(const Dog& rhs)
{
	type = rhs.type;
}

Dog&		Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "bark bark" << std::endl;
}
