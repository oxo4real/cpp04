/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:48 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 05:10:33 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

t_list* AMateria::ground = NULL;

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

void AMateria::throw_on_ground(AMateria* item)
{
    t_list* node = new t_list;
    node->item = item;
    node->next = ground;
    ground = node;
}

void AMateria::vacume_ground(void)
{
    t_list* head = ground;
    t_list* tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        delete tmp->item;
        delete tmp;
    }
    ground = NULL;
}
