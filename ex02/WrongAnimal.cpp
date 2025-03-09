/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:36 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:38 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal() : type("Unknown") {}

WrongAnimal::WrongAnimal(const WrongAnimal& org) : type(org.type) {}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& org)
{
    type = org.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {}

void WrongAnimal::makeSound(void) const
{
    std::cout << "The WrongAnimal makes a sound"
              << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}
