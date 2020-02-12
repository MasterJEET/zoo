#include <cat.h>

#include <iostream>
#include <cstdlib>
#include <ctime>

Cat::Cat(const std::string& name):
    Feline(name, "Cat")
{}

void Cat::MakeNoise() const
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Type: " << type_ << std::endl;
    std::cout << name_ << " says meow" << std::endl;
    std::cout << std::endl;
}

/// Cat behaves randomly when asked to sleep
void Cat::Sleep() const
{
    srand((unsigned)time(0));
    int rand_int = rand() % NO_OF_ALTERNATE_REPSONSES;

    switch(rand_int){
        case 0:
            WakeUp();
            break;
        case 1:
            MakeNoise();
            break;
        case 2:
            Eat();
            break;
        case 3:
            Roam();
            break;
    }
}
