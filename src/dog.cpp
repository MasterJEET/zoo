#include "dog.h"

#include "bark.h"

Dog::Dog(const std::string& name):
    Canine(name, "Dog")
{
    /// Dog 'barks'
    auto noise_style = std::make_shared<Bark>();
    SetNoiseBehaviour(noise_style);
}
