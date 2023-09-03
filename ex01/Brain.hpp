/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:03:05 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 15:59:57 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public :
		Brain();
		virtual ~Brain();
		Brain(const Brain& rhs);
		std::string 	ideas[100];
		
		//operators 
		Brain&		operator=(const Brain&rhs);
};

#endif
