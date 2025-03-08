#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
    std::cout << "Brain default constructor called"
              << std::endl;
}

Brain::Brain(const Brain& org)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = org.ideas[i];
    std::cout << "Brain copy constructor called"
              << std::endl;
}

Brain& Brain::operator=(const Brain& org)
{
    for (int i = 0; i < 99; i++)
        ideas[i] = org.ideas[i];
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called"
              << std::endl;
}
