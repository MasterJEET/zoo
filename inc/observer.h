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
public:
    virtual void Update(const std::shared_ptr<Data>& p_data) const = 0;
};

#endif
