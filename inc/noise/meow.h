/*! \file meow.h
 *  \brief Implements NoiseBehaviour as 'meow'
 *
 * */

#ifndef MEOW_H
#define MEOW_H

#include <string>

#include "noise.h"

class Meow : public NoiseBehaviour {
public:
    std::string MakeNoise() const{return "meows";}
};

#endif
