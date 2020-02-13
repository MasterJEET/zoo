#include "canine.h"

#include <iostream>
#include <string>

#include "run.h"

Canine::Canine(const std::string& name, const std::string& type):
    Animal(name, type)
{
    /// We say canine 'run'
    auto roam_style = std::make_shared<Run>();
    SetRoamBehaviour(roam_style);
}
