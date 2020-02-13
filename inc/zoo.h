/*! \file zoo.h
 *  \brief The Zoo full of Animals maintained by a Zookeeper
 *
 * */

#ifndef ZOO_H
#define ZOO_H

#include <list>
#include <memory>

#include "animal.h"
#include "zookeeper.h"
#include "zooannouncer.h"

class Zoo {
private:
    std::list<Animal::Ptr> animals_;
    std::shared_ptr<Zookeeper> p_zookeeper_;
    std::shared_ptr<ZooAnnouncer> p_announcer_;

public:
    Zoo(std::shared_ptr<Zookeeper> p_zookeeper, std::shared_ptr<ZooAnnouncer> p_announcer):
        p_zookeeper_(p_zookeeper),
        p_announcer_(p_announcer)
    {}

    void PutAnimals(const std::list<std::string>& animal_names, const std::list<std::string>& animal_species);
    void Start();
};

#endif
