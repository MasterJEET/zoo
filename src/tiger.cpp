#include <tiger.h>

#include <iostream>

Tiger::Tiger(const std::string& name):
    Feline(name, "Tiger")
{}

void Tiger::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    // TODO: different roar maybe?
    std::cout << name_ << " roars" << std::endl;
    std::cout << std::endl;
}
