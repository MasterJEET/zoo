#include <pachyderm.h>

#include <iostream>
#include <string>

#include "walk.h"

Pachyderm::Pachyderm(const std::string& name, const std::string& type):
    Animal(name, type)
{
    /// We say pachyderm 'walk'
    auto roam_style = std::make_shared<Walk>();
    SetRoamBehaviour(roam_style);
}
