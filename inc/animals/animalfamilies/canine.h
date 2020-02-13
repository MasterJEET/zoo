/*! \file canine.h
 *  \brief Animal family Canine
 *
 * */

#ifndef CANINE_H
#define CANINE_H

#include <string>

#include "animal.h"
#include "roam/run.h"

class Canine : public Animal {
public:
    Canine(const std::string& name, const std::string& type):
        Animal(name, type)
    {
        /// We say canine 'run'
        auto roam_style = std::make_shared<Run>();
        SetRoamBehaviour(roam_style);
    }
};

#endif
