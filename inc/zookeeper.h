/*! \file zookeeper.h
 *  \brief Zookeeper which will asks animals what to do
 *
 * */

#ifndef ZOOKEEPER_H
#define ZOOKEEPER_H

#include <string>
#include <list>

#include "animal.h"
#include "observable.h"

class Zookeeper : public Observable {
private:
    std::string name_;
    std::list<std::shared_ptr<Observer>> observers_;

public:

    Zookeeper(): Zookeeper("John"){}
    Zookeeper(const std::string& name): name_(name){}
    Zookeeper(const Zookeeper& zookeeper){name_ = zookeeper.name_;}
    ~Zookeeper(){}
    Zookeeper& operator=(Zookeeper zookeeper);

    std::string GetName() const{return name_;}
    void SetName(const std::string& name){name_ = name;}

    void RegisterObserver(std::shared_ptr<Observer> ptr){observers_.push_back(ptr);}
    void RemoveObserver(std::shared_ptr<Observer> ptr){observers_.remove(ptr);}
    void NotifyObservers(const std::shared_ptr<Data>& p_data) const;

    /// This method uses other utility functions to execute the daily responsibilities
    /// of the zookeeper.
    void ExecuteResponsibilities(const std::list<Animal::Ptr>& animals) const;

    /// Follwing functions represent responsibilities the zookeeper must execute
    void WakeAnimals(const std::list<Animal::Ptr>& animals) const;
    void RollCall(const std::list<Animal::Ptr>& animals) const;
    void FeedAnimals(const std::list<Animal::Ptr>& animals) const;
    void ExerciseAnimals(const std::list<Animal::Ptr>& animals) const;
    void ShutDownZoo(const std::list<Animal::Ptr>& animals) const;
};

#endif
