/*! \file noise.h
 *  \brief Common interface for all the noise behaviours
 *
 * */

#ifndef NOISE_H
#define NOISE_H

#include <memory>
#include <string>

class NoiseBehaviour {
public:
    virtual std::string MakeNoise() const = 0;
    using Ptr = std::shared_ptr<NoiseBehaviour>;
};

#endif
