/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:49 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::AMateria(void) : type("Unknown") {}

AMateria::AMateria(const AMateria& org) : type(org.type) {}

AMateria::~AMateria(void) {}

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
