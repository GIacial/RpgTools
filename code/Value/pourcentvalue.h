#ifndef POURCENTVALUE_H
#define POURCENTVALUE_H

#include "numericvalueInterface.h"

class PourcentValue : public NumericValueInterface
{
public:
    //constructeur
    explicit PourcentValue(const int valeur , const int max);                       //constructeur a partir d'une valeur et d'un max
    explicit PourcentValue(const double frequence);                                 //constructeur a partir d'une nombre qui multiplier par xent donne un pourcentage
    PourcentValue(const PourcentValue& val);                                        //constructeur de copie

    //destructeur
    virtual ~PourcentValue() throw ();

    //operator
    PourcentValue& operator = (const PourcentValue& PourcentValue);                 //copie

    //fonction
    const double& getValue()const;                                                  //donne la frequence du pourcentage

private:
    double* frequence;
};

#endif // POURCENTVALUE_H
