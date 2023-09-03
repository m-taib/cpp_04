/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:24:33 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:26:12 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog has been constructed" << std::endl;
	type = "Dog";
	_ptr = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed" << std::endl;
	delete _ptr;
}

Dog::Dog(const Dog& rhs)
{
	_ptr = new Brain();
	*this = rhs;
}

Dog&		Dog::operator=(const Dog& rhs)
{
	type = rhs.type;
	*_ptr = *rhs._ptr;
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "Eaaaw" << std::endl;
}
