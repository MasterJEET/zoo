/*! \file hippo.h
 *  \brief Animal species: Hippo
 *
 * */

#ifndef HIPPO_H
#define HIPPO_H

#include "animalfamilies/pachyderm.h"

#include <string>

class Hippo : public Pachyderm {
public:
    Hippo(const std::string& name);
};

#endif
