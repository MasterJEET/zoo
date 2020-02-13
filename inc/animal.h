/*! \file animal.h
 *  \brief Abstract class for animals
 *
 * */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <memory>

#include "roam.h"

class Animal{
private:
    /// std::shared_ptr to a RoamBehaviour object to be set dynamically
    RoamBehaviour::Ptr roam_style_;

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
    
    virtual void SetRoamBehaviour(RoamBehaviour::Ptr roam_style){roam_style_ = roam_style;}

    /// Following function was virtual as per Project1 to enable inheritance,
    /// now they are ordinary function hence we are bound to use 'Strategy pettern'
    /// to implement Roam behaviours
    void Roam() const;

    //TODO: Implement similar to Roam behaviour
    virtual void MakeNoise() const = 0;
};

#endif
