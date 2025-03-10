/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 02:53:26 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria named constructor called"
              << std::endl;
}

AMateria::AMateria(void) : type("Unknown")
{
    std::cout << "AMateria default constructor called"
              << std::endl;
}

AMateria::AMateria(const AMateria& org) : type(org.type)
{
    std::cout << "AMateria copy constructor called"
              << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called"
              << std::endl;
}

AMateria& AMateria::operator=(const AMateria& org)
{
    type = org.type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses a materia on "
              << target.getName()
              << " *"
              << std::endl;
}
