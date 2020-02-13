/*! \file run.h
 *  \brief Implements 'roam' behaviour as 'run'
 *
 * */

#ifndef RUN_H
#define RUN_H

#include "roam.h"

class Run : public RoamBehaviour {
public:
    virtual std::string Roam() const override;
};

#endif
