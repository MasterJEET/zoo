/*! \file pachyderm.h
 *  \breif Animal family Pachyderm
 *
 * */

#ifndef PACHYDERM_H
#define PACHYDERM_H

#include <animal.h>

#include <string>

class Pachyderm : public Animal {
public:
    Pachyderm(const std::string& name, const std::string& type);
};

#endif
