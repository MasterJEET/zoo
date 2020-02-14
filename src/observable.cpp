#include "observable.h"

#include <iostream>

void Observable::NotifyObservers(const std::shared_ptr<Data>& p_data) const
{
    for(const auto& o: observers_)
    {
        o->Update(p_data);
    }
}
