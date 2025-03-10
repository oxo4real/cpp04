/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:28 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 02:40:23 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Unknown")
{
    std::cout << "Animal default constructor called"
              << std::endl;
}

Animal::Animal(const Animal& org) : type(org.type)
{
    std::cout << "Animal copy constructor called"
              << std::endl;
}

Animal& Animal::operator=(const Animal& org)
{
    type = org.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called"
              << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "The Animal makes a sound"
              << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}
