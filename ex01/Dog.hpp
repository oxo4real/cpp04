#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog(void);
        Dog(const Dog& org);
        Dog& operator=(const Dog& org);
        ~Dog(void);
        void makeSound(void) const;
        void setidea(int idx, std::string idea);
        std::string getidea(int idx) const;
};

#endif
