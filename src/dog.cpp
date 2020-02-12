#include <dog.h>

#include <iostream>

Dog::Dog(const std::string& name):
    Canine(name, "Dog")
{}

void Dog::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " barks" << std::endl;
    std::cout << std::endl;
}
