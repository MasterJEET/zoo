/*! \file wolf.h
 *  \brief Animal species: Wolf
 *
 * */

#ifndef WOLF_H
#define WOLF_H

#include "animalfamilies/canine.h"

class Wolf : public Canine {
public:
    Wolf(const std::string& name);
};

#endif
