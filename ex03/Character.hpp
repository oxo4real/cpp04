/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:39:15 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 04:59:39 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        Character(void);
        Character(const std::string& name);
        Character(const Character& org);
        Character& operator=(const Character& org);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
