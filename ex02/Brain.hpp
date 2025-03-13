/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:07:58 by jedusser          #+#    #+#             */
/*   Updated: 2025/03/13 13:08:03 by jedusser         ###   ########.fr       */
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
        void setIdea(int index, const std::string& idea);
        std::string getIdea(int index) const;
};

#endif
