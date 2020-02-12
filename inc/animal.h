/*! \file animal.h
 *  \brief Abstract class for animals
 *
 * */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <memory>

class Animal{

protected:
    /// Name of the animal that begins with the first letter of its species
    const std::string name_;

    /// TODO verify!: Which species the animal belong to
    const std::string type_;

public:

    using Ptr = std::shared_ptr<Animal>;

    Animal(const std::string& name, const std::string& type);

    virtual void WakeUp() const;
    virtual void Eat() const;
    virtual void Sleep() const;

    // Making the below methods pure virtual because the child classes have to implement this
    // method for their instantiation. This is because making noise and roaming are
    // specific to each animal type.
    virtual void MakeNoise() const = 0;
    virtual void Roam() const = 0;
};

#endif
