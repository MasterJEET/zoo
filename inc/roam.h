/*! \file roam.h
 *  \brief Interface for 'roam' behaviour of animals
 *
 * */

#ifndef ROAM_H
#define ROAM_H

#include <memory>
#include <string>

class RoamBehaviour {
public:
    virtual std::string Roam() const = 0;
    using Ptr = std::shared_ptr<RoamBehaviour>;
};

#endif
