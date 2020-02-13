/*! \file lion.h
 *  \brief Animal species: Lion
 *
 * */

#ifndef LION_H
#define LION_H

#include <feline.h>

#include <string>

class Lion : public Feline {
public:
    Lion(const std::string& name);

    /// Lion 'roars'
    virtual void MakeNoise() const override;
};

#endif
