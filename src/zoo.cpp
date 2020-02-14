#include "zoo.h"

#include <iostream>

#include "animalspecies/lion.h"
#include "animalspecies/hippo.h"
#include "animalspecies/dog.h"
#include "animalspecies/cat.h"
#include "animalspecies/elephant.h"
#include "animalspecies/wolf.h"
#include "animalspecies/tiger.h"
#include "animalspecies/rhino.h"

void Zoo::PutAnimals(const std::list<std::string>& animal_names, const std::list<std::string>& animal_species)
{
    auto it_n = animal_names.begin();
    auto it_t = animal_species.begin();

    for(; it_n != animal_names.end() && it_t != animal_species.end(); it_n++, it_t++)
    {
        const std::string& name = *it_n;
        const std::string& type = *it_t;

        if(!type.compare("Cat"))
        {
            animals_.push_back( std::make_shared<Cat>(name) );
        }
        else if(!type.compare("Dog"))
        {
            animals_.push_back( std::make_shared<Dog>(name) );
        }
        else if(!type.compare("Elephant"))
        {
            animals_.push_back( std::make_shared<Elephant>(name) );
        }
        else if(!type.compare("Hippo"))
        {
            animals_.push_back( std::make_shared<Hippo>(name) );
        }
        else if(!type.compare("Lion"))
        {
            animals_.push_back( std::make_shared<Lion>(name) );
        }
        else if(!type.compare("Rhino"))
        {
            animals_.push_back( std::make_shared<Rhino>(name) );
        }
        else if(!type.compare("Tiger"))
        {
            animals_.push_back( std::make_shared<Tiger>(name) );
        }
        else if(!type.compare("Wolf"))
        {
            animals_.push_back( std::make_shared<Wolf>(name) );
        }
    }
}

void Zoo::Start()
{
    p_zookeeper_->ExecuteResponsibilities(animals_);
}
