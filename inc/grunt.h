/*! \file grunt.h
 *  \brief Implements NoiseBehaviour as Grunt
 *
 * */

#ifndef GRUNT_H
#define GRUNT_H

#include <string>

#include "noise.h"

class Grunt : public NoiseBehaviour {
public:
    std::string MakeNoise() const override;
};

#endif
