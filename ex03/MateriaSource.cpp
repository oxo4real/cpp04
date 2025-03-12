/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:47:28 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 20:55:41 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource default constructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& org)
{
    std::cout << "MateriaSource copy constructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (org.inventory[i])
            inventory[i] = org.inventory[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& org)
{
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = NULL;
        if (org.inventory[i])
            inventory[i] = org.inventory[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destructor called"
              << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
};

void MateriaSource::learnMateria(AMateria* m)
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
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i] && inventory[i]->getType() == type)
            return (inventory[i]->clone());
    }
    return (0);
}
