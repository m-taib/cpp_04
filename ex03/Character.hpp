/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:15:44 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 18:03:33 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : ICharacter
{
	public :
		Character();
		Character(const std::string& name);
		Character(const Character& rhs);
		Character& 	operator=(const Character& rhs);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private :
		std::string 	_name;
		AMateria 		*_ptr[4];
		AMateria 		*_lefts[4];
};

#endif
