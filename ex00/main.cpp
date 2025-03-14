/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:21:38 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 17:19:49 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "------ Correct Animals ------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "type in dog class is : " <<  dog->getType() << std::endl;
    std::cout << "type in cat class is : " << cat->getType() << std::endl;
    cat->makeSound();  // Cat soun
    dog->makeSound();  // dog sound
    meta->makeSound(); // animal sound

    delete meta;
    delete dog;
    delete cat;

    std::cout << "\n------ Wrong Animals ------" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound();  
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}