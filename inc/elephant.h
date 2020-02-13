/*! \file elephant.h
 *  \brief Animal species: Elephant
 *
 * */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <pachyderm.h>

#include <string>

class Elephant : public Pachyderm {
public:
    Elephant(const std::string& name);

    /// Elephant 'trumpets' as opposed to 'rumbles' (in Project 1)
    virtual void MakeNoise() const override;
};

#endif
