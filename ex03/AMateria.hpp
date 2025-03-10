/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:05:50 by aaghzal           #+#    #+#             */
/*   Updated: 2025/03/10 04:01:16 by aaghzal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;
class AMateria;

typedef struct s_list
{
    AMateria*       item;
    struct s_list*  next;
}              t_list;

class AMateria
{
    protected:
        std::string     type;
        static t_list*  ground;
    public:
        AMateria(std::string const & type);
        AMateria(void);
        AMateria(const AMateria& org);
        virtual ~AMateria(void);
        AMateria& operator=(const AMateria& org);
        static void throw_on_ground(AMateria* item);
        static void vacume_ground(void);

        std::string const & getType() const; //Returns the materia type

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
