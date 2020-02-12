#include <wolf.h>

#include <iostream>

#include "zoo.h"

int main()
{

    Zookeeper zookeeper("John");
    Zoo zoo(zookeeper);

    std::list<std::string> animal_names = {"Chloe", "Charlie", "Dexter", "Dan", "Leo",
        "Lucy", "Harry", "Howard", "Edward", "Eddy", "Rad", "Ruby", "Will", "Wade"};
    std::list<std::string> animal_species = {"Cat", "Cat", "Dog", "Dog", "Lion",
        "Lion", "Hippo", "Hippo", "Elephant", "Elephant", "Rhino", "Rhino", "Wolf", "Wolf"};

    zoo.PutAnimals(animal_names, animal_species);

    zoo.Start();

    return 0;
}
