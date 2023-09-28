/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 09:07:59 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/23 09:27:02 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main()
{
	{
		std::cout << "------test 1: with Animal\n";
		const	Animal* meta = new Animal();
		const	Animal*	cat = new Cat();
		const	Animal* dog = new Dog();
	
		std::cout << "Animal type: " << meta->getType() << "\n";
		std::cout << "Cat type:" << cat->getType() << "\n";
		std::cout << "Dog type:" << cat->getType() << "\n";

		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	{
		std::cout << "\n\n------test 2: with WrongAnimal\n\n";
		const	WrongAnimal* meta = new WrongAnimal();
		const	WrongAnimal* cat = new WrongCat();
		const	WrongAnimal* dog = new WrongDog();
	
		std::cout << "WrongAnimal type: " << meta->getType() << "\n";
		std::cout << "WrongCat type:" << cat->getType() << "\n";
		std::cout << "WrongCog type:" << dog->getType() << "\n";;

		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
}
