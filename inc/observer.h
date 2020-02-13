/*! \file observer.h
 *  \brief Interface for observer (as in 'Observer pattern')
 *
 * */

#ifndef OBSERVER_H
#define OBSERVER_H

#include <memory>

#include "observable.h"
#include "data.h"

class Observable;

class Observer {
protected:
    std::shared_ptr<Observable> p_observable_;

public:
    using Ptr = std::shared_ptr<Observer>;

    virtual void Update(const std::shared_ptr<Data>& p_data) const = 0;
};

#endif
