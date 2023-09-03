/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:20:11 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:47:29 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	public :
		MateriaSource();
		MateriaSource(const std::string& name);
		MateriaSource(const MateriaSource& rhs);
		MateriaSource& 	operator=(const MateriaSource& rhs);
		~MateriaSource();
		void	learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const &materia);
	private :
		std::string name;
		AMateria *_ptr[4];
};

#endif
