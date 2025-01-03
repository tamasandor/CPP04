/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:22:00 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 16:10:27 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor has been called\n";
	m_type = "Cat";
}

Cat::Cat(const Cat &original) : Animal()
{
	std::cout << "Cat copy constructor has been called\n";
	if (this != &original)
		*this = original;
}

Cat &Cat::operator = (const Cat &original)
{
	std::cout << "Cat copy assignment operator has been called\n";
	if (this != &original)
		this->m_type = original.m_type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MeeeeeoooOOOOww!" << '\n';
}

Cat::~Cat()
{
	std::cout << "Cat deconstuctor has been called\n";
}
