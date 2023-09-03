/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:55:39 by mtaib             #+#    #+#             */
/*   Updated: 2023/09/03 16:16:37 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void	f()
{
	int		N;

	N = 6;
	Animal 	*ptr[N];
	int		i;

	i = -1;
	while (++i < N)
	{
		if (i % 2)
			ptr[i] = new Cat();
		else
			ptr[i] = new Dog();
	}
	i = -1;
	while (++i < N)
		delete ptr[i];
	Cat *a;
	a = new Cat();
	{
	Cat *b;
	
	b = new Cat();
	*a = *b;
	delete b;
	}
	delete a;
}
int		main()
{
	f();
	//while (1);
	return (0);
}
