#ifndef STATISTIQUEMAXBORNEDREF_H
#define STATISTIQUEMAXBORNEDREF_H
#include "statistiquemaxborned.h"

class StatistiqueMaxBornedRef : public StatistiqueMaxBorned
{
public://constructeur
    explicit StatistiqueMaxBornedRef(const std::string nom , const NumericValue& valeurInitial ,const NumericValue& maxValue);                    //constructeur avec une numerical value
    explicit StatistiqueMaxBornedRef(const std::string nom , const int valeurInitial,const NumericValue& maxValue);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMaxBornedRef(const std::string nom , const double valeurInitial,const NumericValue& maxValue);                          //constructeur de stat a valeur de pourcentage

    StatistiqueMaxBornedRef(const StatistiqueMaxBornedRef &stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMaxBornedRef() throw ();

protected:

    //operateur
    virtual StatistiqueMaxBornedRef& operator = (const StatistiqueMaxBornedRef& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMaxValue()const;                                                   //donne la valeur max

private:
    const NumericValue& maxValue;
};

#endif // STATISTIQUEMAXBORNEDREF_H
