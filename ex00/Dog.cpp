/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:05 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:04:06 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "iostream"

Dog::Dog()
{
    type = "Dog";
}

Dog::Dog(const Dog& org) : Animal(org) {}

Dog& Dog::operator=(const Dog& org)
{
    type = org.type;
    return (*this);
}

Dog::~Dog(void) {}

void Dog::makeSound(void) const
{
    std::cout << "The Dog barks"
              << std::endl;
}
