/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:47:26 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:23:33 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public :
		Cat();
		~Cat();
		Cat(const Cat& rhs);
		void	makeSound(void);
	
		//operators
		Cat&	operator=(const Cat& rhs);
	
		/*********/
	private :
		Brain *_ptr;
};

#endif
