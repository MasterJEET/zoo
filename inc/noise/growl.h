/*! \file growl.h
 *  \brief Implements NoiseBehaviour as 'growl'
 *
 * */

#ifndef GROWL_H
#define GROWL_H

#include <string>

#include "noise.h"

class Growl : public NoiseBehaviour {
public:
    std::string MakeNoise() const{return "growls";}
};

#endif
