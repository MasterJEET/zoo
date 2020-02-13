/*! \file howl.h
 *  \brief Implements NoiseBehaviour as 'howl'
 *
 * */

#ifndef HOWL_H
#define HOWL_H

#include <string>

#include "noise.h"

class Howl : public NoiseBehaviour {
public:
    std::string MakeNoise() const;
};

#endif
