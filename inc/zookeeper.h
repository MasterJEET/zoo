/*! \file zookeeper.h
 *  \brief Zookeeper which will asks animals what to do?
 *
 * */

#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <animal.h>

#include <string>
#include <list>

class Zookeeper {

private:
    std::string name_;

public:

    Zookeeper(const std::string& name): name_(name){}
    Zookeeper(const Zookeeper& zookeeper){name_ = zookeeper.name_;}
    ~Zookeeper(){}

    Zookeeper& operator=(Zookeeper zookeeper);

    std::string GetName() const{return name_;}

    /// This method uses other utility functions to execute the daily responsibilities
    /// of the zookeeper.
    void ExecuteResponsibilities(const std::list<Animal::Ptr>& animals) const;

    void WakeAnimals(const std::list<Animal::Ptr>& animals) const;
    void RollCall(const std::list<Animal::Ptr>& animals) const;
    void FeedAnimals(const std::list<Animal::Ptr>& animals) const;
    void ExerciseAnimals(const std::list<Animal::Ptr>& animals) const;
    void ShutDownZoo(const std::list<Animal::Ptr>& animals) const;
};

#endif
