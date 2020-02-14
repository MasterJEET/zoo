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

/*! Holds the activity type
 *
 * This class is used to pass information activity type to
 * ZooAnnouncer and Zookeeper
 * */
class Activity : public Data {
public:
    ActivityType activity_type;
    Activity(ActivityType at): activity_type(at){}
};
