/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:43 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 17:07:46 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog default constructor called"
              << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& org) : Animal(org)
{
    std::cout << "Dog copy constructor called"
              << std::endl;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setidea(i, org.brain->getidea(i));
}

Dog& Dog::operator=(const Dog& org)
{
    type = org.type;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setidea(i, org.brain->getidea(i));
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called"
              << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "The Dog barks"
              << std::endl;
}

std::string Dog::getidea(int idx) const
{
    return (brain->getidea(idx));
}

void Dog::setidea(int idx, std::string idea)
{
    brain->setidea(idx, idea);
}
