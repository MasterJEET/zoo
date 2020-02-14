#include "animalspecies/hippo.h"

#include "noise/grunt.h"

Hippo::Hippo(const std::string& name):
    Pachyderm(name, "Hippo")
{
    /// Hippo 'grunts' as opposed to 'growls' (in Project 1)
    auto noise_style = std::make_shared<Grunt>();
    SetNoiseBehaviour(noise_style);
}
