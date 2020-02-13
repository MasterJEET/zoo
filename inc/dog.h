/*! \file dog.h
 *  \brief Animal species: Dog
 *
 * */

#ifndef DOG_H
#define DOG_H

#include <canine.h>

#include <string>

class Dog : public Canine {
public:
    Dog(const std::string& name);
};

#endif
