#ifndef NOTSAMESIZEEXCEPTION_H
#define NOTSAMESIZEEXCEPTION_H

#include "exception.h"

class NotSameSizeException : public Exception
{
public:
    //constructeur
    NotSameSizeException();
    NotSameSizeException(const NotSameSizeException& e);
    //destructeur
    virtual ~NotSameSizeException() throw ();

    //operateur
    virtual NotSameSizeException& operator =(const NotSameSizeException& e);
};

#endif // NOTSAMESIZEEXCEPTION_H
