/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:22:12 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 17:13:12 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog: Default constructor called" << std::endl;
    _type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    brain = other.brain ? new Brain(*other.brain) : NULL;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog: Assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain)
            delete brain;
        brain = other.brain ? new Brain(*other.brain) : NULL;
    }
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog: Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}

