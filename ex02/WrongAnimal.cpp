#include "WrongAnimal.hpp"
#include "iostream"

WrongAnimal::WrongAnimal() : type("Unknown") {}

WrongAnimal::WrongAnimal(const WrongAnimal& org) : type(org.type) {}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& org)
{
    type = org.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {}

void WrongAnimal::makeSound(void) const
{
    std::cout << "The WrongAnimal makes a sound"
              << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}
