#include <iostream>

#include "zoo.h"
#include "zooannouncer.h"

int main()
{

    auto p_zookeeper = std::make_shared<Zookeeper>("John");
    auto p_announcer = std::make_shared<ZooAnnouncer>("Jane");
    p_zookeeper->RegisterObserver(p_announcer);
    Zoo zoo(p_zookeeper, p_announcer);

    std::list<std::string> animal_names = {"Chloe", "Charlie", "Dexter", "Dan", "Leo",
        "Lucy", "Harry", "Howard", "Edward", "Eddy", "Rad", "Ruby", "Will", "Wade"};
    std::list<std::string> animal_species = {"Cat", "Cat", "Dog", "Dog", "Lion",
        "Lion", "Hippo", "Hippo", "Elephant", "Elephant", "Rhino", "Rhino", "Wolf", "Wolf"};

    zoo.PutAnimals(animal_names, animal_species);

    zoo.Start();
    p_zookeeper->RemoveObserver(p_announcer);

    return 0;
}
