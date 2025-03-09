/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:53 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:54 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include <iostream>
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& org) : AMateria(org) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& org)
{
    type = org.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "
              << target.getName()
              << "'s wounds *"
              << std::endl;
}
