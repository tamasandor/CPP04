/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:35:21 by atamas            #+#    #+#             */
/*   Updated: 2025/01/03 23:26:19 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor has been called\n";
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constractor has been called\n";
	if (this != &original)
		*this = original;
}

Brain &Brain::operator = (const Brain &original)
{
	std::cout << "Brain copy assignment operator has been called\n";
	if (this != &original)
		return (*this); // here
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor has been called\n";
}
