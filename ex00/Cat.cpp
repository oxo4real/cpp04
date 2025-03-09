/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:00 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:04:02 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat()
{
    type = "Cat";
}

Cat::Cat(const Cat& org) : Animal(org) {}

Cat& Cat::operator=(const Cat& org)
{
    type = org.type;
    return (*this);
}

Cat::~Cat(void) {}

void Cat::makeSound(void) const
{
    std::cout << "The Cat says Meow"
              << std::endl;
}
