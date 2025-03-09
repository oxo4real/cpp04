/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:44 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:05:47 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(const WrongCat& org);
        WrongCat& operator=(const WrongCat& org);
        ~WrongCat(void);
        void makeSound(void) const;
};

#endif
