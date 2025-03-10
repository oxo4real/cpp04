/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:00 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 02:43:40 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat default constructor called"
              << std::endl;
}

Cat::Cat(const Cat& org) : Animal(org)
{
    std::cout << "Cat copy constructor called"
              << std::endl;
}

Cat& Cat::operator=(const Cat& org)
{
    type = org.type;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called"
              << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "The Cat says Meow"
              << std::endl;
}
