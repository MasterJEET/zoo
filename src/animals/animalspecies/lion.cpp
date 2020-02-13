#include "animalspecies/lion.h"

#include "noise/roar.h"

Lion::Lion(const std::string& name):
    Feline(name, "Lion")
{
    /// Lion 'roars'
    auto noise_style = std::make_shared<Roar>();
    SetNoiseBehaviour(noise_style);
}
