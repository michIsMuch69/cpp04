/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:54:02 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 17:04:28 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat: Default constructor called" << std::endl;
    _type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    brain = other.brain ? new Brain(*other.brain) : NULL;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat: Assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain)
            delete brain;
        brain = other.brain ? new Brain(*other.brain) : NULL;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

