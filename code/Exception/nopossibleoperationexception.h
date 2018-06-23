#ifndef NoPossibleOperationException_H
#define NoPossibleOperationException_H

#include "exception.h"

class NoPossibleOperationException : public Exception
{
public:
    //constructeur
    NoPossibleOperationException();
    NoPossibleOperationException(const NoPossibleOperationException& e);
    //destructeur
    virtual ~NoPossibleOperationException() throw ();

    //operateur
    virtual NoPossibleOperationException& operator =(const NoPossibleOperationException& e);
};

#endif // NoPossibleOperationException_H
