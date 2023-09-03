/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:44:59 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:43:13 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& rhs);
		void	makeSound(void) const;
		
		std::string getType() const;
		//operators :
		WrongAnimal&	operator=(const WrongAnimal& rhs);
		/***********/
	protected :
		std::string type;
};

#endif
