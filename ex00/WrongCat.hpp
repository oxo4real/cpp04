/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:04:21 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/09 18:04:24 by aaghzal          ###   ########.fr       */
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
