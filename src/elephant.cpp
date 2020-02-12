#include <elephant.h>

#include <iostream>

Elephant::Elephant(const std::string& name):
    Pachyderm(name, "Elephant")
{}

void Elephant::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " says rumble" << std::endl;
    std::cout << std::endl;
}
