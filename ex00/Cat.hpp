/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:47:26 by mtaib             #+#    #+#             */
/*   Updated: 2023/08/31 20:28:33 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	Cat();
	~Cat();
	Cat(const Cat& rhs);
	void	makeSound(void);

	//operators
	Cat&	operator=(const Cat& rhs);

	/*********/
};

#endif
