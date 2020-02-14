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

#include "noise/meow.h"
#include "noise/bark.h"
#include "noise/trumpet.h"
#include "noise/grunt.h"
#include "noise/roar.h"
#include "noise/growl.h"
#include "noise/snarl.h"
#include "noise/howl.h"

#include "roam/run.h"
#include "roam/walk.h"
#include "roam/sprint.h"

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
            std::shared_ptr<Animal> p_animal = std::make_shared<Cat>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Meow>() );
            p_animal->SetRoamBehaviour( std::make_shared<Sprint>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Dog"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Dog>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Bark>() );
            p_animal->SetRoamBehaviour( std::make_shared<Run>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Elephant"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Elephant>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Trumpet>() );
            p_animal->SetRoamBehaviour( std::make_shared<Walk>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Hippo"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Hippo>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Grunt>() );
            p_animal->SetRoamBehaviour( std::make_shared<Walk>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Lion"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Lion>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Roar>() );
            p_animal->SetRoamBehaviour( std::make_shared<Sprint>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Rhino"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Rhino>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Growl>() );
            p_animal->SetRoamBehaviour( std::make_shared<Walk>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Tiger"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Tiger>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Roar>() );
            p_animal->SetRoamBehaviour( std::make_shared<Sprint>() );

            animals_.push_back( p_animal );
        }
        else if(!type.compare("Wolf"))
        {
            std::shared_ptr<Animal> p_animal = std::make_shared<Wolf>(name);
            p_animal->SetNoiseBehaviour( std::make_shared<Howl>() );
            p_animal->SetRoamBehaviour( std::make_shared<Run>() );

            animals_.push_back( p_animal );
        }
    }
}

void Zoo::Start()
{
    p_zookeeper_->ExecuteResponsibilities(animals_);
    p_zookeeper_->RemoveObserver( p_announcer_ );
}
