/*! \file zooannouncer.h
 *  \brief The ZooAnnouncer implements Observer interface
 *
 * */

#ifndef ZOOANNOUNCER_H
#define ZOOANNOUNCER_H

#include <string>
#include <memory>

#include "observer.h"
#include "observable.h"

class ZooAnnouncer : public Observer {
private:
    /*! Making constructor private to force use of 'Create' method
     *  
     *  We need to 'Create' method for object construction here as we
     *  need to register ZooAnnouncer to receive updates from Observable right
     *  after construction of ZooAnnouncer
     * */
    ZooAnnouncer():
        ZooAnnouncer("", nullptr)
    {}
    ZooAnnouncer(const std::string name, std::shared_ptr<Observable> p_obl):
        name_(name),
        p_observable_(p_obl)
    {}

    std::string name_;
    std::shared_ptr<Observable> p_observable_;

public:

    /*! 'Create' to be called instead of constructor to get an instance of the class
     *
     *  This is required to ensure ZooAnnouncer (which is an Observer) registers with
     *  Observable for notifications (updates) right after construction of ZooAnnouncer
     *
     *  Returns a std::shared_ptr<ZooAnnouncer>
     * */
    static std::shared_ptr<ZooAnnouncer> Create(
            const std::string& name,
            std::shared_ptr<Observable> p_zookeeper
            );

    /// This is the update method, the Observable object calls
    void Update(const std::shared_ptr<Data>& p_data) const;

    std::string GetName() const {return name_;}
    void SetName(const std::string& name){name_ = name;}
    std::shared_ptr<Observable> GetObservable() const {return p_observable_;}
    void SetObservable(std::shared_ptr<Observable> p_observable) {p_observable_ = p_observable;}
};

#endif
