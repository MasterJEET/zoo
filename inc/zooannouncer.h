/*! \file zooannouncer.h
 *  \brief The ZooAnnouncer implements Observer interface
 *
 * */

#ifndef ZOOANNOUNCER_H
#define ZOOANNOUNCER_H

#include <string>
#include <memory>

#include "observer.h"

class ZooAnnouncer : public Observer, public std::enable_shared_from_this<ZooAnnouncer> {
private:
    const std::string& name_;

public:
    ZooAnnouncer(const std::string name): name_(name){}
    void Update(const std::shared_ptr<Data>& p_data) const;
};

#endif
