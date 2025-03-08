#include "Dog.hpp"
#include "Animal.hpp"
#include "iostream"

Dog::Dog()
{
    type = "Dog";
}

Dog::Dog(const Dog& org) : Animal(org) {}

Dog& Dog::operator=(const Dog& org)
{
    type = org.type;
    return (*this);
}

Dog::~Dog(void) {}

void Dog::makeSound(void) const
{
    std::cout << "The Dog barks"
              << std::endl;
}
