#include "feline.h"

#include <iostream>
#include <string>

#include "sprint.h"

Feline::Feline(const std::string& name, const std::string& type):
    Animal(name, type)
{
    /// We say feline 'sprint'
    auto roam_style = std::make_shared<Sprint>();
    SetRoamBehaviour(roam_style);
}
