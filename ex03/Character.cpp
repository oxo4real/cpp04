/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:47:28 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/12 05:21:05 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(void) : name("Unknown")
{
    std::cout << "Character default constructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
    std::cout << "Character named constructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& org) : name(org.name)
{
    std::cout << "Character copy constructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (org.inventory[i])
            inventory[i] = org.inventory[i]->clone();
    }
}

Character& Character::operator=(const Character& org)
{
    name = org.name;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
        if (org.inventory[i])
            inventory[i] = org.inventory[i]->clone();
    }
    return (*this);
}

Character::~Character(void)
{
    std::cout << "Character destructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
};

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == m)
            return ;
    }
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
    AMateria::throw_on_ground(m);
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && inventory[idx])
    {
        AMateria::throw_on_ground(inventory[idx]);
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && inventory[idx])
        inventory[idx]->use(target);
}
