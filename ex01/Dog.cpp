/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:25:45 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 23:24:45 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << "WoooooOOoff!" << '\n';
}

Dog::Dog()
{
	m_brain = new Brain();
	std::cout << "Dog constructor has beenn called\n";
	m_type = "Dog";
}

Dog::Dog(const Dog &original) : Animal()
{
	std::cout << "Dog Copy constructor has been called\n";
	if (this != &original)
		m_type = original.m_type;
}

Dog &Dog::operator= (const Dog &original)
{
	std::cout << "Dog Copy assignment operator has been called\n";
	if (this != &original)
	{
		this->m_brain = new Brain();
		this->m_type = original.m_type;
	}
	return (*this);
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Dog deconstructor has been called\n";
}
