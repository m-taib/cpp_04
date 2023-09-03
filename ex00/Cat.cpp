/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:22:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:20:34 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat has been constructed" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat has been destructed" << std::endl;
}

Cat::Cat(const Cat& rhs)
{
	type = rhs.type;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowww" << std::endl;
}
