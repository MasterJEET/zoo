#include <feline.h>

#include <iostream>
#include <string>

Feline::Feline(const std::string& name, const std::string& type):
    Animal(name, type)
{}

void Feline::Roam() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    // TODO: Shouldn't this be different roaming style instead of 'roams'
    std::cout << name_ << " roams" << std::endl;
    std::cout << std::endl;
}
