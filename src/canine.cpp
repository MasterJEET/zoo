#include <canine.h>

#include <iostream>
#include <string>

Canine::Canine(const std::string& name, const std::string& type):
    Animal(name, type)
{
}

void Canine::Roam() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " roams" << std::endl;
    std::cout << std::endl;
}
