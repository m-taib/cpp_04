/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:24:33 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/31 20:25:47 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Dog::Dog()
{
	std::cout << "Dog has been constructed" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog has been destructed" << std::endl;
}