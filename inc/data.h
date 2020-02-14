/*! \file data.h
 *  \brief The data to be passed to an observer in the implementation
 *  of the 'Observer pattern'
 *
 * */

#ifndef DATA_H
#define DATA_H

/*! Data to be passed to Observer from Observable
 *
 * Classes implementing 'Observer pattern' through 'Observer' and
 * 'Observable' interface must be able share data. A certain concrete
 * data class must be derived from this class which can then be passed
 * to NotifyObservers method of 'Observable'
 *
 * */
class Data {
public:
    virtual void DoNothing() const{}
};

#endif
