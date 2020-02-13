/*! \file rhino.h
 *  \brief Animal species: Rhino
 *
 * */

#ifndef RHINO_H
#define RHINO_H

#include "animalfamilies/pachyderm.h"

#include <string>

class Rhino : public Pachyderm {
public:
    Rhino(const std::string& name);
};

#endif
