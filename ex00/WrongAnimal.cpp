/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:15 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 02:44:57 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("Unknown")
{
    std::cout << "WrongAnimal default constructor called"
              << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& org) : type(org.type)
{
    std::cout << "WrongAnimal copy constructor called"
              << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& org)
{
    type = org.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called"
              << std::endl;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "The WrongAnimal makes a sound"
              << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}
