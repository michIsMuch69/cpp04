/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:07:09 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/13 13:07:11 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    if (other.brain)
        brain = new Brain(*other.brain);
    else
        brain = NULL;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat: Assignment operator called" << std::endl;
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

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

void Cat::setBrainIdea(int index, const std::string& idea)
{
    if (brain)
        brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const
{
    if (brain)
        return brain->getIdea(index);
    return "";
}
