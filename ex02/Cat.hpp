#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat(void);
        Cat(const Cat& org);
        Cat& operator=(const Cat& org);
        ~Cat(void);
        void makeSound(void) const;
        void setidea(int idx, std::string idea);
        std::string getidea(int idx) const;
};

#endif
