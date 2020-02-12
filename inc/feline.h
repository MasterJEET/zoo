/*! \file feline.h
 *  \brief Animal family Feline
 *
 * */

#ifndef FELINE_H
#define FELINE_H

#include <animal.h>

#include <string>

class Feline : public Animal {
public:
    Feline(const std::string& name, const std::string& type);

    virtual void Roam() const override;
};

#endif
