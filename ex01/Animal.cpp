#include "Animal.hpp"
#include "iostream"

Animal::Animal() : type("Unknown")
{
    std::cout << "Animal default constructor called"
              << std::endl;
}

Animal::Animal(const Animal& org) : type(org.type)
{
    std::cout << "Animal copy constructor called"
              << std::endl;
}

Animal& Animal::operator=(const Animal& org)
{
    type = org.type;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called"
              << std::endl;
}

void Animal::makeSound(void) const
{
    std::cout << "The Animal makes a sound"
              << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}
