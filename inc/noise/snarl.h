/*! \file snarl.h
 *  \brief Implements NoiseBehaviour as 'snarl'
 *
 * */

#ifndef SNARL_H
#define SNARL_H

#include <string>

#include "noise.h"

class Snarl : public NoiseBehaviour {
public:
    std::string MakeNoise() const{return "snarls";}
};

#endif
