#ifndef NOTSAMETYPEEXCEPTION_H
#define NOTSAMETYPEEXCEPTION_H

#include "exception.h"

class NotSameTypeException : public Exception
{
public:
    //constructeur
    NotSameTypeException();
    NotSameTypeException(const NotSameTypeException& e);
    //destructeur
    virtual ~NotSameTypeException() throw ();

    //operateur
    NotSameTypeException& operator =(const NotSameTypeException& e);
};

#endif // NOTSAMETYPEEXCEPTION_H
