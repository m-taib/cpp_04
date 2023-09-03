/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:24:23 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 19:49:36 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int		i;

	i = -1;
	while (++i < 4)
		_ptr[i] = NULL;
	std::cout << "MateriaSource has been constructed";
	this->name = "unkown";
}

MateriaSource::MateriaSource(const std::string& name)
{
	int		i;

	i = -1;
	while (++i < 4)
		_ptr[i] = NULL;
	std::cout << "MateriaSource has been constructed";
	this->name = name;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource has been destructed";

}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	int		i;


	i = -1;
	while (++i < 4)
	{
		if (rhs._ptr[i])
			_ptr[i] = rhs._ptr[i]->clone();
		else
			_ptr[i] = NULL;
	}
}

MateriaSource&		MateriaSource::operator=(const MateriaSource &rhs)
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
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (!ptr[i])
			break;
	}
	if (i == 4)
	{
		std::cout << "The inventory is full" << std::endl;
		return 
	}
	while (++i < 4)
	{
		if (!_ptr[i])
			ptr[i] = materia;
	}
}

AMateria*		MateriaSource::createMateria(std::string const &materia)
{
	int		i;
	AMateria	*ptr;

	ptr = NULL;
	i = -1;
	while (++i < 4)
	{
		if (materia == _ptr[i]->getType())
		{
			ptr = _ptr[i]->clone();	
			return (ptr);
		}
	}
	return (0);
}
