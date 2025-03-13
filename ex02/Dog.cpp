/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:08:18 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/13 13:08:21 by jedusser         ###   ########.fr       */
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
    if (other.brain)
        brain = new Brain(*other.brain);
    else
        brain = NULL;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog: Assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        if (brain)
            delete brain;
        if (other.brain)
            brain = new Brain(*other.brain);
        else
            brain = NULL;
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

void Dog::setBrainIdea(int index, const std::string& idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

std::string Dog::getBrainIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}

