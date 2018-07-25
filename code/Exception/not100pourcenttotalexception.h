#ifndef NOT100POURCENTTOTALEXCEPTION_H
#define NOT100POURCENTTOTALEXCEPTION_H

#include "exception.h"

class Not100PourcentTotalException : public Exception
{
public:
    //constructeur
    Not100PourcentTotalException();
    Not100PourcentTotalException(const Not100PourcentTotalException& e);
    //destructeur
    virtual ~Not100PourcentTotalException() throw ();

    //operateur
    virtual Not100PourcentTotalException& operator =(const Not100PourcentTotalException& e);
};

#endif // NOT100POURCENTTOTALEXCEPTION_H
