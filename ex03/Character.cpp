/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:47:28 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 23:57:04 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : name("Unknown")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string name) : name(name)
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& org) : name(org.name)
{
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
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && inventory[idx])
        inventory[idx]->use(target);
}
