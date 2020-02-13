/*! \file walk.h
 *  \brief Implements 'roam' behaviour as 'walk'
 *
 * */

#ifndef WALK_H
#define WALK_H

#include "roam.h"

class Walk : public RoamBehaviour {
public:
    std::string Roam() const override;
};

#endif
