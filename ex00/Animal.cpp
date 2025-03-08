#include "Animal.hpp"
#include "iostream"

Animal::Animal() : type("Unknown") {}

Animal::Animal(const Animal& org) : type(org.type) {}

Animal& Animal::operator=(const Animal& org)
{
    type = org.type;
    return (*this);
}

Animal::~Animal(void) {}

void Animal::makeSound(void) const
{
    std::cout << "The Animal makes a sound"
              << std::endl;
}

std::string Animal::getType(void) const
{
    return (type);
}
