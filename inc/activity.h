/*! \file activity.h
 *  \brief Activity/Responsibility of ZooKeeper to be shared with ZooAnnouncer
 * */

#include <iostream>

#include "data.h"

/// Enumerating responsibilities that a zookeeper must execute
enum class ActivityType : short {
    Wake = 0,
    RollCall,
    Feed,
    Exercise,
    ShutDown
};

class Activity : public Data {
public:
    ActivityType activity_type;
    Activity(ActivityType at): activity_type(at){}
};
