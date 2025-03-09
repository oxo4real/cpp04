/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:19 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:04:20 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "iostream"

WrongCat::WrongCat()
{
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& org) : WrongAnimal(org)
{
    type = org.type;
}

WrongCat& WrongCat::operator=(const WrongCat& org)
{
    type = org.type;
    return (*this);
}

WrongCat::~WrongCat(void) {}

void WrongCat::makeSound(void) const
{
    std::cout << "The WrongCat says Meow"
              << std::endl;
}
