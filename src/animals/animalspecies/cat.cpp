#include "animalspecies/cat.h"

#include <cstdlib>
#include <ctime>

#include "noise/meow.h"

Cat::Cat(const std::string& name):
    Feline(name, "Cat")
{
    /// Cat 'meows'
    auto noise_style = std::make_shared<Meow>();
    SetNoiseBehaviour(noise_style);
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
