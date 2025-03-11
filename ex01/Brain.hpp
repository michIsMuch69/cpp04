/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michismuch <michismuch@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:53:08 by michismuch        #+#    #+#             */
/*   Updated: 2025/03/11 16:58:41 by michismuch       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain(); 
        Brain(const Brain &other);
        Brain &operator=(const Brain &other);
        ~Brain();

        std::string ideas[100];
};

#endif

