#include "animalspecies/rhino.h"

#include "noise/growl.h"

Rhino::Rhino(const std::string& name):
    Pachyderm(name, "Rhino")
{
    /// Rhino 'growls'
    auto noise_style = std::make_shared<Growl>();
    SetNoiseBehaviour(noise_style);
}
