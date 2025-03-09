/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:24 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:26 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "iostream"

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
        brain->ideas[i] = org.brain->ideas[i];
}

Dog& Dog::operator=(const Dog& org)
{
    type = org.type;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->ideas[i] = org.brain->ideas[i];
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
    return (brain->ideas[idx % 100]);
}

void Dog::setidea(int idx, std::string idea)
{
    brain->ideas[idx % 100] = idea;
}
