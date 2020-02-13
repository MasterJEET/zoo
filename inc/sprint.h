/*! \file sprint.h
 *  \brief Implements 'roam' behaviour as 'sprint'
 *
 * */

#ifndef SPRINT_H
#define SPRINT_H

#include "roam.h"

class Sprint : public RoamBehaviour {
public:
    std::string Roam() const override;
};

#endif
