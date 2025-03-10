/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:33 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 17:07:27 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    std::cout << "Brain default constructor called"
              << std::endl;
}

Brain::Brain(const Brain& org)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = org.ideas[i];
    std::cout << "Brain copy constructor called"
              << std::endl;
}

Brain& Brain::operator=(const Brain& org)
{
    for (int i = 0; i < 99; i++)
        ideas[i] = org.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called"
              << std::endl;
}

std::string Brain::getidea(int idx) const
{
    if (idx < 100 && idx >= 0)
        return (ideas[idx]);
    return (NULL);
}

void Brain::setidea(int idx, std::string idea)
{
    if (idx < 100 && idx >= 0)
        ideas[idx] = idea;
}
