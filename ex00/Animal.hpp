/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:44:59 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/02 12:00:50 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(const Animal& rhs);
		virtual void	makeSound(void) const;
		
		std::string getType() const;
		//operators :
		Animal&	operator=(const Animal& rhs);
		/***********/
	protected :
		std::string type;
};

#endif
