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
