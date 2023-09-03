/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:20:15 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:15:45 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		_ptr[i] = NULL;
		_lefts[i] = NULL;
	}
	std::cout << "Character has been constructed" << std::endl;
	_name = "unkown";
}

Character::Character(const std::string& name)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		_ptr[i] = NULL;
		_lefts[i] = NULL;
	}
	std::cout << "Character has been constructed" << std::endl;
	_name = name;
}

Character::Character(const Character& rhs)
{
	int		i;
	
		
	i = -1;
	while (++i < 4)
	{
		if (rhs._ptr[i])
			_ptr[i] = rhs._ptr[i]->clone();
		else
			_ptr[i] = NULL;
		_lefts[i] = NULL;	
	}
}

Character& 	Character::operator=(const Character& rhs)
{
	int		i;
	
	i = -1;
	while (++i < 4)
	{
		if (_ptr[i])
			delete _ptr[i];
		if (rhs._ptr[i])
			_ptr[i] = rhs._ptr[i]->clone();
		else
			_ptr[i] = NULL;
		_lefts[i] = NULL;	
	}
	_name = rhs._name;
	return (*this);
}

std::string const & Character::getName() const
{
	const std::string& 	name = _name;

	return (name);	
}

void 	Character::equip(AMateria* m)
{
	int		i;
	int		isFull;

	i = -1;
	while (++i < 4)
	{
		if (_ptr[i])
			break;
	}
	if (i == 4)
	{
		std::cout << "The inventory is full" << std::endl;
		return ;
	}
	i = -1;
	while (++i < 4)
	{
		if (_lefts[i])
		{
			delete _lefts[i];
			_lefts[i] = NULL;
			isFull++;
		}
	}
	i = -1;
	while (++i < 4)
	{
		if (!_ptr[i])
			_ptr[i] = m;
	}
}

void 	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "You enterred incorrect index, chose from (0-3)" << std::endl;
		return ;
	}
	if (!_ptr[idx])
		return ;
	_lefts[idx] = _ptr[idx];
	_ptr[idx] = NULL;
}

Character::~Character()
{
	std::cout << "Character has been destructed" << std::endl;
}

void 	Character::use(int idx, ICharacter& target)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (!_ptr[i])
			break;
	}
	if (i == 4)
	{
		std::cout << "The inventory is full" << std::endl;
		return ;
	}
	if (idx > 3 || idx < 0)
	{
		std::cout << "You enterred incorrect index, chose from (0-3)" << std::endl;
		return ;
	}
	if (!_ptr[idx])
		return ;
	_ptr[idx]->use(target);
}
