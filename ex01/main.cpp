/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:47 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:07 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    std::cout << "------------------------------------------------"
              << std::endl;

    Dog k;
    Dog l(k);

    k.setidea(0, "I love my owner");
    l.setidea(0, "I want to play!");

    std::cout << k.getidea(0) << std::endl;
    std::cout << l.getidea(0) << std::endl;

    return 0;
}