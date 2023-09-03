/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:44:59 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/02 16:01:45 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	public :
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& rhs);
		virtual void	makeSound(void) = 0;

	//operators :
	AAnimal&	operator=(const AAnimal& rhs);
	/***********/
	protected :
		std::string type;
};

#endif
