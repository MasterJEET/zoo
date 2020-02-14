/*! \file observable.h
 *  \brief Interface for 'Observable/Subject' as in 'Observer pattern'
 *
 * */

#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <list>
#include <memory>

#include "observer.h"
#include "data.h"

class Observer;

class Observable {
protected:
    std::list<std::shared_ptr<Observer>> observers_;

public:
    using Ptr = std::shared_ptr<Observable>;

    virtual void RegisterObserver(std::shared_ptr<Observer> ptr){observers_.push_back(ptr);}
    virtual void RemoveObserver(std::shared_ptr<Observer> ptr){observers_.remove(ptr);}
    virtual void NotifyObservers(const std::shared_ptr<Data>& p_data) const;
};

#endif
