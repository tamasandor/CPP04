/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:18:39 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 12:55:35 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	m_type = "Animal";
	std::cout << "Animal default constructor has been called\n";
}

Animal::Animal(std::string type)
{
	m_type = type;
	std::cout << "Animal constructor has been called\n";
}

Animal::Animal(const Animal &original)
{
	m_type = original.m_type;
	std::cout << "Animal copy constructor has been called\n";
}

Animal &Animal::operator = (const Animal &original)
{
	std::cout << "Animal copy assignment has been called\n";
	if (this == &original)
		return (*this);
	m_type = original.m_type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal deconstructor has been called\n";
}

void Animal::makeSound() const
{
	std::cout << "This is an animal sound" << '\n';
}

std::string Animal::getType() const
{
	return (m_type);
}