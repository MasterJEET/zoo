#include <hippo.h>

#include <iostream>

Hippo::Hippo(const std::string& name):
    Pachyderm(name, "Hippo")
{}

void Hippo::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " grunts" << std::endl;
    std::cout << std::endl;
}
