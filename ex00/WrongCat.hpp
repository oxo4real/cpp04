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
