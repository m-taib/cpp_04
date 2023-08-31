/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:22:43 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/31 20:24:27 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat()
{
	std::cout << "Cat has been constructed" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat has been destructed" << std::endl;

}
