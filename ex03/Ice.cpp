/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:53 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 03:00:22 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include <iostream>
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice default constructor called"
              << std::endl;
}

Ice::Ice(const Ice& org) : AMateria(org)
{
    std::cout << "Ice copy constructor called"
              << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called"
              << std::endl;
}

Ice& Ice::operator=(const Ice& org)
{
    type = org.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "
              << target.getName()
              << " *"
              << std::endl;
}
