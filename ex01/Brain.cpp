/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:35:21 by atamas            #+#    #+#             */
/*   Updated: 2025/01/09 13:42:33 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &original)
{
	std::cout << "Brain copy constractor called\n";
	if (this != &original)
		*this = original;
}

Brain &Brain::operator = (const Brain &original)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &original)
		return (*this); // here
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}
