#ifndef STATISTIQUEMINBORNEDWITHREF_H
#define STATISTIQUEMINBORNEDWITHREF_H

#include "statistiqueminborned.h"

//utilise une ref sur une autre valeur pour avoir un min qui ce modifie au cours du temps ( si la valeur passer en parametre est modifie ailleurs)
class StatistiqueMinBornedWithRef : public StatistiqueMinBorned
{
public://constructeur
    explicit StatistiqueMinBornedWithRef(const std::string nom , const NumericValue& valeurInitial ,const NumericValue& minValue);                    //constructeur avec une numerical value
    explicit StatistiqueMinBornedWithRef(const std::string nom , const int valeurInitial,const NumericValue& minValue);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMinBornedWithRef(const std::string nom , const double valeurInitial,const NumericValue& minValue);                          //constructeur de stat a valeur de pourcentage

    StatistiqueMinBornedWithRef(const StatistiqueMinBornedWithRef &stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMinBornedWithRef() throw ();

protected:

    //operateur
    virtual StatistiqueMinBornedWithRef& operator = (const StatistiqueMinBornedWithRef& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMinValue()const;                                                   //donne la valeur min

private:
    const NumericValue& minValue;
};

#endif // STATISTIQUEMINBORNEDWITHREF_H
