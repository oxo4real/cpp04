/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:39 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:40 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& org);
        WrongAnimal& operator=(const WrongAnimal& org);
        virtual ~WrongAnimal(void);
        void makeSound(void) const;
        std::string getType(void) const;
};

#endif
