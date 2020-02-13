#include "animalspecies/elephant.h"

#include "noise/trumpet.h"

Elephant::Elephant(const std::string& name):
    Pachyderm(name, "Elephant")
{
    /// Elephant 'trumpets' as opposed to 'rumbles' (in Project 1)
    auto noise_style = std::make_shared<Trumpet>();
    SetNoiseBehaviour(noise_style);
}
