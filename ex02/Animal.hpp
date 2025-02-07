/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 17:18:51 by atamas            #+#    #+#             */
/*   Updated: 2025/02/07 09:51:33 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string m_type;
public:
	std::string	getType() const;
	virtual void	makeSound() const = 0;
	Animal();
	Animal(std::string type);
	Animal(const Animal &original);
	Animal &operator = (const Animal &original);
	virtual ~Animal() = 0;
};

#endif
