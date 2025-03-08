#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(const Brain& org);
        Brain& operator=(const Brain& org);
        ~Brain(void);
};

#endif
