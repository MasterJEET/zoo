/*! \file bark.h
 *  \brief Implements NoiseBehaviour as 'bark'
 *
 * */

#ifndef BARK_H
#define BARK_H

#include <string>

#include "noise.h"

class Bark : public NoiseBehaviour {
public:
    std::string MakeNoise() const{return "barks";}
};

#endif
