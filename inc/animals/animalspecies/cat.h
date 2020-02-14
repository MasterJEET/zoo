/*! \file cat.h
 *  \brief Animal species: Cat
 *
 * */

#ifndef CAT_H
#define CAT_H

#include "animalfamilies/feline.h"

#include <string>

class Cat : public Feline {
private:
    static const int NO_OF_ALTERNATE_REPSONSES = 4;

public:
    Cat(const std::string& name);

    /*! Sleep method calling which Cat will behave randomly
     *
     * This random behaviour of Cat was requird in Project 1 and
     * has been kept as such for consistency. Also there was no 
     * mention in Project 2 about changing this
     * */
    virtual void Sleep() const override;
};

#endif
