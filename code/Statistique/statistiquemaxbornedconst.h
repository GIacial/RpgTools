#ifndef STATISTIQUEMAXBORNEDCONST_H
#define STATISTIQUEMAXBORNEDCONST_H

#include "statistiquemaxborned.h"


class StatistiqueMaxBornedConst : public StatistiqueMaxBorned
{
public:
    //constructeur
    explicit StatistiqueMaxBornedConst(const std::string nom , const NumericValue& valeurInitial, const NumericValue& max );                    //constructeur avec une numerical value
    explicit StatistiqueMaxBornedConst(const std::string nom , const int valeurInitial , const NumericValue& max);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMaxBornedConst(const std::string nom , const double valeurInitial , const NumericValue& max);                          //constructeur de stat a valeur de pourcentage

    explicit StatistiqueMaxBornedConst(const std::string nom , const NumericValue& valeurInitial, const int max );                    //constructeur avec une numerical value
    explicit StatistiqueMaxBornedConst(const std::string nom , const int valeurInitial , int max);                              //constructeur de stat a valeur entiere

    explicit StatistiqueMaxBornedConst(const std::string nom , const NumericValue& valeurInitial, const double max );                    //constructeur avec une numerical value
    explicit StatistiqueMaxBornedConst(const std::string nom , const double valeurInitial , double max);                              //constructeur de stat a valeur entiere

    StatistiqueMaxBornedConst(const StatistiqueMaxBornedConst &stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMaxBornedConst() throw ();

protected:

    //operateur
    virtual StatistiqueMaxBornedConst& operator = (const StatistiqueMaxBornedConst& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMaxValue()const;                                                   //donne la valeur max

private:
    //constructeur
    void generalConstructeur(NumericValue *max);

    //variable
    NumericValue* maxValue;
};

#endif // STATISTIQUEMAXBORNEDCONST_H
