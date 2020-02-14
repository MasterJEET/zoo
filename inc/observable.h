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
public:
    virtual void RegisterObserver(std::shared_ptr<Observer> ptr) = 0;
    virtual void RemoveObserver(std::shared_ptr<Observer> ptr) = 0;
    virtual void NotifyObservers(const std::shared_ptr<Data>& p_data) const = 0;
};

#endif
