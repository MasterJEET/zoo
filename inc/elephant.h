/*! \file elephant.h
 *  \brief Animal species: Elephant
 *
 * */

#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <pachyderm.h>

#include <string>

class Elephant : public Pachyderm {
public:
    Elephant(const std::string& name);
};

#endif
