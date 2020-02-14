#include "zooannouncer.h"

#include <iostream>

#include "activity.h"

std::shared_ptr<ZooAnnouncer> ZooAnnouncer::Create(
        const std::string& name,
        std::shared_ptr<Observable> p_zookeeper
        ){
    auto p_announcer = std::shared_ptr<ZooAnnouncer>(new ZooAnnouncer(name, p_zookeeper));
    p_zookeeper->RegisterObserver(p_announcer);
    return p_announcer;
}

void ZooAnnouncer::Update(const std::shared_ptr<Data>& p_data) const
{
    auto p_act = std::dynamic_pointer_cast<Activity>(p_data);

    switch(p_act->activity_type){
        case ActivityType::Wake:
            std::cout << "ZooAnnouncer: ZooKeeper will wake animals" << std::endl;
            break;
        case ActivityType::RollCall:
            std::cout << "ZooAnnouncer: ZooKeeper will take a roll call" << std::endl;
            break;
        case ActivityType::Feed:
            std::cout << "ZooAnnouncer: ZooKeeper will feed the animals" << std::endl;
            break;
        case ActivityType::Exercise:
            std::cout << "ZooAnnouncer: ZooKeeper will make animals exercise" << std::endl;
            break;
        case ActivityType::ShutDown:
            std::cout << "ZooAnnouncer: ZooKeeper will shut down the zoo" << std::endl;
            break;
        default:
            std::cout << "ZooAnnouncer: ZooKeeper will do something!!!" << std::endl;
            break;
    }
}
