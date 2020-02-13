/*! \file roar.h
 *  \brief Implements NoiseBehaviour as 'roar'
 *
 * */

#ifndef ROAR_H
#define ROAR_H

#include <string>

#include "noise.h"

class Roar : public NoiseBehaviour {
public:
    std::string MakeNoise() const{return "roars";}
};

#endif
