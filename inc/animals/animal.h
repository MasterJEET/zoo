/*! \file animal.h
 *  \brief Abstract class for animals
 *
 * */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <memory>

#include "roam.h"
#include "noise.h"

class Animal{
private:
    /// std::shared_ptr to a RoamBehaviour which can be set dynamically
    RoamBehaviour::Ptr roam_behaviour_;

    /// std::shared_ptr to a NoiseBehaviour which can be set dynamically
    NoiseBehaviour::Ptr noise_behaviour_;

protected:
    /// Name of the animal that begins with the first letter of its species
    const std::string name_;

    /// Which species the animal belong to
    const std::string type_;

public:
    using Ptr = std::shared_ptr<Animal>;

    Animal(const std::string& name, const std::string& type);

    virtual void WakeUp() const;
    virtual void Eat() const;
    virtual void Sleep() const;
    
    virtual void SetRoamBehaviour(RoamBehaviour::Ptr roam_style){roam_behaviour_ = roam_style;}
    virtual void SetNoiseBehaviour(NoiseBehaviour::Ptr noise_style){noise_behaviour_ = noise_style;}

    /// Following function was virtual as per Project1 to enable inheritance,
    /// now they are ordinary function hence we are bound to use 'Strategy pettern'
    /// to implement Roam behaviours
    void Roam() const;

    /// Following function was virtual as per Project1 to enable inheritance,
    /// now they are ordinary function hence we are bound to use 'Strategy pettern'
    /// to implement Noise behaviours
    void MakeNoise() const;
};

#endif
