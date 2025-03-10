/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:47 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 18:03:11 by aaghzal          ###   ########.fr       */
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

    {
        Dog k;
        Dog l(k);

        k.setidea(0, "E = mc2");
        l.setidea(0, "memes");

        std::cout << k.getidea(0) << std::endl;
        std::cout << l.getidea(0) << std::endl;
    }

    std::cout << "------------------------------------------------"
              << std::endl;

    Animal* arr[2];
    for (int i = 0; i < 2; i++)
    {
        if (i % 2 == 0)
            arr[i] = new Cat();
        else
            arr[i] = new Dog();
    }

    std::cout << "~~~~~~"
              << std::endl;

    for (int i = 0; i < 2; i++)
        delete arr[i];

    return 0;
}