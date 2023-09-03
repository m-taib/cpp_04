/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:46:47 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:23:25 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	public :
		Dog();
		~Dog();
		Dog(const Dog& rhs);
		void	makeSound(void);	

		//operators	
		Dog&	operator=(const Dog& rhs);
		/*********/
	private : 
		Brain *_ptr;
};

#endif
