/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:57 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:58 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(const Ice& org);
        Ice& operator=(const Ice& org);
        ~Ice(void);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
