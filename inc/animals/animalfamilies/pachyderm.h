/*! \file pachyderm.h
 *  \breif Animal family Pachyderm
 *
 * */

#ifndef PACHYDERM_H
#define PACHYDERM_H

#include <string>

#include "animal.h"
#include "roam/walk.h"

class Pachyderm : public Animal {
public:
    Pachyderm(const std::string& name, const std::string& type):
        Animal(name, type)
    {
        /// We say pachyderm 'walk'
        auto roam_style = std::make_shared<Walk>();
        SetRoamBehaviour(roam_style);
    }
};

#endif
