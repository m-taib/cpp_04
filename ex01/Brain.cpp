/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:36:19 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:06:48 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been destructed" << std::endl;
}

Brain::Brain(const Brain& rhs)
{
	*this = rhs;
}

Brain&	 Brain::operator=(const Brain& rhs)
{
	int		i;
	
	i = -1;
	while (++i < 100)
		ideas[i] = rhs.ideas[i];
	return (*this);
}
