/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:11 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:12 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal& org);
        Animal& operator=(const Animal& org);
        virtual ~Animal(void);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
};

#endif
