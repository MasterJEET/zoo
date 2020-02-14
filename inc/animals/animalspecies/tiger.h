/*! \file tiger.h
 *  \brief Animal species: Tiger
 *
 * */

#ifndef TIGER_H
#define TIGER_H

#include "animalfamilies/feline.h"

#include <string>

class Tiger : public Feline {
public:
    Tiger(const std::string& name);
};

#endif
