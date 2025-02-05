/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:22:53 by atamas            #+#    #+#             */
/*   Updated: 2025/02/05 18:39:13 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* wAnimal = new WrongAnimal();
	const WrongAnimal* cAnimal = new WrongCat();

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << "\n<<Wrong test start from here>>\n\n";
	wAnimal->makeSound();
	cAnimal->makeSound();
	delete meta;
	delete cat;
	delete dog;
	delete wAnimal;
	delete cAnimal;
	return (0);
}