/*! \file tiger.h
 *  \brief Animal species: Tiger
 *
 * */

#ifndef TIGER_H
#define TIGER_H

#include <feline.h>

#include <string>

class Tiger : public Feline {
public:
    Tiger(const std::string& name);

    /// Tiger does 'roar' but to differentiate it from 'a lion's roar'
    /// we make it 'snarl'
    virtual void MakeNoise() const override;
};

#endif
