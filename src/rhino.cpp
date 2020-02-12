#include <rhino.h>

#include <iostream>

Rhino::Rhino(const std::string& name):
    Pachyderm(name, "Rhino")
{}

void Rhino::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    // TODO: different growls may be?
    std::cout << name_ << " growls" << std::endl;
    std::cout << std::endl;
}
