/*! \file trumpet.h
 *  \brief Implements NoiseBehaviour as 'trumpet'
 *
 * */

#ifndef TRUMPET_H
#define TRUMPET_H

#include <string>

#include "noise.h"

class Trumpet : public NoiseBehaviour {
public:
    std::string MakeNoise() const;
};

#endif
