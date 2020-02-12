#include <wolf.h>

#include <iostream>
#include <string>

Wolf::Wolf(const std::string& name):
    Canine(name, "Wolf")
{}

void Wolf::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " howls" << std::endl;
    std::cout << std::endl;
}
