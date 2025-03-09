/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:19 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:20 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "iostream"

Cat::Cat()
{
    std::cout << "Cat default constructor called"
              << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& org) : Animal(org)
{
    std::cout << "Cat copy constructor called"
              << std::endl;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->ideas[i] = org.brain->ideas[i];
}

Cat& Cat::operator=(const Cat& org)
{
    type = org.type;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->ideas[i] = org.brain->ideas[i];
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called"
              << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "The Cat says Meow"
              << std::endl;
}

std::string Cat::getidea(int idx) const
{
    return (brain->ideas[idx % 100]);
}

void Cat::setidea(int idx, std::string idea)
{
    brain->ideas[idx % 100] = idea;
}
