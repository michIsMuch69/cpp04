/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:07:32 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/13 13:09:52 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define BLUE    "\033[34m"
#define GREEN   "\033[32m"
#define PURPLE  "\033[35m"
#define WHITE   "\033[37m"

void testSubject()
{
    std::cout << BLUE << "\nBasic Test" << RESET << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
}

void testDeepCopy()
{
    std::cout << GREEN << "\n--- test Deep Copy ---" << RESET << std::endl;
    
    Dog* originalDog = new Dog();
    originalDog->setBrainIdea(0, "J'aime les os");
    
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "Idee originale de dog: " << originalDog->getBrainIdea(0) << std::endl;
    std::cout << "Idee de la copie de  dog " << copiedDog->getBrainIdea(0) << std::endl;
    
    copiedDog->setBrainIdea(0, "Je n'aime pas les chats");
    
    std::cout << "Apres modification du Dog copie " << std::endl;
    std::cout << "idee du Dog original " << originalDog->getBrainIdea(0) << std::endl;
    std::cout << "Idee du Dog copie " << copiedDog->getBrainIdea(0) << std::endl;
    
    delete originalDog;
    delete copiedDog;
}

void testAnimalArray()
{
    std::cout << PURPLE << "\n--- Animal Array Test ---" << RESET << std::endl;
    
    const int arraySize = 10;
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize; ++i)
    {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << "Animal " << i << " is a " << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < arraySize; ++i)
        delete animals[i];
}

int main()
{   
    testSubject();
    testDeepCopy();
    testAnimalArray();

    return 0;
}



