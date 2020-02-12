/*! \file cat.h
 *  \brief Animal species: Cat
 *
 * */

#ifndef CAT_H
#define CAT_H

#include <feline.h>

#include <string>

class Cat : public Feline {
private:
    static const int NO_OF_ALTERNATE_REPSONSES = 4;

public:
    Cat(const std::string& name);

    virtual void MakeNoise() const override;
    virtual void Sleep() const override;
};

#endif
