/*! \file canine.h
 *  \brief Animal family Canine
 *
 * */

#ifndef CANINE_H
#define CANINE_H

#include <animal.h>

#include <string>

class Canine : public Animal {
public:
    Canine(const std::string& name, const std::string& type);
};

#endif
