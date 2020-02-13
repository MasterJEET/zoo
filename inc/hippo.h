/*! \file hippo.h
 *  \brief Animal species: Hippo
 *
 * */

#ifndef HIPPO_H
#define HIPPO_H

#include <pachyderm.h>

#include <string>

class Hippo : public Pachyderm {
public:
    Hippo(const std::string& name);

    /// Hippo 'grunts' as opposed to 'growls' (in Project 1)
    virtual void MakeNoise() const override;
};

#endif
