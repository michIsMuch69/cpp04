/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:06:46 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/13 13:06:47 by jedusser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = other;
    return ;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &other)
{
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "Animal: Generic animal sound" << std::endl;
}
