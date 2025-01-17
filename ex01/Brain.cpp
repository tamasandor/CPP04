/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 22:35:21 by atamas            #+#    #+#             */
/*   Updated: 2025/01/17 10:01:50 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		setIdea("New idea", i);
	}
	std::cout << "Brain default constructor has been called\n";
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
	{
		for (int i = 0; i < 100; i++)
			setIdea(getIdea(i), i);
		return (*this);
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called\n";
}

void		Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < 100)
		m_ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	if (index >= 0 && index < 100)
		return (m_ideas[index]);
	return ("");
}
