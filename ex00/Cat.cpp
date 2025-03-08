#include "Cat.hpp"
#include "iostream"

Cat::Cat()
{
    type = "Cat";
}

Cat::Cat(const Cat& org) : Animal(org) {}

Cat& Cat::operator=(const Cat& org)
{
    type = org.type;
    return (*this);
}

Cat::~Cat(void) {}

void Cat::makeSound(void) const
{
    std::cout << "The Cat says Meow"
              << std::endl;
}
