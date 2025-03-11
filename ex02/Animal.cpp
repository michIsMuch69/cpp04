/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:20:43 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 17:10:59 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal: Assignment operator called" << std::endl;
    if (this != &other)
    _type = other._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

//ici pas d'impl. pour makesound puisque celle-ci est maintenant virtuelle pure.