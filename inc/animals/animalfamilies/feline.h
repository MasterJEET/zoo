/*! \file feline.h
 *  \brief Animal family Feline
 *
 * */

#ifndef FELINE_H
#define FELINE_H

#include <string>

#include "animal.h"
#include "roam/sprint.h"

class Feline : public Animal {
public:
    Feline(const std::string& name, const std::string& type):
        Animal(name, type)
    {
        /// We say feline 'sprint'
        auto roam_style = std::make_shared<Sprint>();
        SetRoamBehaviour(roam_style);
    }
};

#endif
