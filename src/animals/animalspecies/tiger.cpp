#include "animalspecies/tiger.h"

#include "noise/snarl.h"

Tiger::Tiger(const std::string& name):
    Feline(name, "Tiger")
{
    /// Tiger does 'roar' but to differentiate it from 'a lion's roar'
    /// we make it 'snarl'
    auto noise_style = std::make_shared<Snarl>();
    SetNoiseBehaviour(noise_style);
}
