/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:05 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 02:44:13 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog default constructor called"
              << std::endl;
}

Dog::Dog(const Dog& org) : Animal(org)
{
    std::cout << "Dog copy constructor called"
              << std::endl;
}

Dog& Dog::operator=(const Dog& org)
{
    type = org.type;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called"
              << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "The Dog barks"
              << std::endl;
}
