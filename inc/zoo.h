/*! \file zoo.h
 *  \brief The Zoo full of Animals maintained by a Zookeeper
 *
 * */

#ifndef ZOO_H
#define ZOO_H

#include <list>

#include "animal.h"
#include "zookeeper.h"

class Zoo {
private:
    std::list<Animal::Ptr> animals_;
    Zookeeper zookeeper_;

public:
    Zoo(const Zookeeper& zookeeper):
        zookeeper_(zookeeper)
    {}

    void PutAnimals(const std::list<std::string>& animal_names, const std::list<std::string>& animal_species);
    void Start();
};

#endif
