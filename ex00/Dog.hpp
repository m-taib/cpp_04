/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:46:47 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:20:10 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(const Dog& rhs);
		void	makeSound(void) const;	

		//operators	
		Dog&	operator=(const Dog& rhs);
		/*********/
};

#endif
