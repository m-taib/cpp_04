/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:22:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/02 17:46:23 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat has been constructed" << std::endl;
	type = "Cat";
	_ptr = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat has been destructed" << std::endl;
	delete _ptr;
}

Cat::Cat(const Cat& rhs)
{
	_ptr = new (Brain);
	*this = rhs;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	type = rhs.type;
	*(_ptr) = *(rhs._ptr);
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "Meowww" << std::endl;
}
