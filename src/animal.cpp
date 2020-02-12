#include <animal.h>

#include <iostream>
#include <string>

Animal::Animal(const std::string& name, const std::string& type):
    name_(name),
    type_(type)
{
}

void Animal::WakeUp() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " wakes up" << std::endl;
    std::cout << std::endl;
}

void Animal::Eat() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " eats" << std::endl;
    std::cout << std::endl;
}

void Animal::Sleep() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " sleeps" << std::endl;
    std::cout << std::endl;
}
