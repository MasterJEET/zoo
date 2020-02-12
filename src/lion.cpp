#include <lion.h>

#include <iostream>

Lion::Lion(const std::string& name):
    Feline(name, "Lion")
{}

void Lion::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " roars" << std::endl;
    std::cout << std::endl;
}
