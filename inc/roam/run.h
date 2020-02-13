/*! \file run.h
 *  \brief Implements 'roam' behaviour as 'run'
 *
 * */

#ifndef RUN_H
#define RUN_H

#include "roam.h"

class Run : public RoamBehaviour {
public:
    std::string Roam() const override{return "runs";}
};

#endif
