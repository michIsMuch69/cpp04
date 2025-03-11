/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:21:21 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 17:09:45 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
    std::cout << "Meow? (wrong)" << std::endl;
}