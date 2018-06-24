#ifndef STATISTIQUEMINBORNEDCONST_H
#define STATISTIQUEMINBORNEDCONST_H

#include "statistiqueminborned.h"

class StatistiqueMinBornedConst : public StatistiqueMinBorned
{
public:
    //constructeur
    explicit StatistiqueMinBornedConst(const std::string nom , const NumericValue& valeurInitial, const NumericValue& min );                    //constructeur avec une numerical value
    explicit StatistiqueMinBornedConst(const std::string nom , const int valeurInitial , const NumericValue& min);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMinBornedConst(const std::string nom , const double valeurInitial , const NumericValue& min);                          //constructeur de stat a valeur de pourcentage

    explicit StatistiqueMinBornedConst(const std::string nom , const NumericValue& valeurInitial, const int min );                    //constructeur avec une numerical value
    explicit StatistiqueMinBornedConst(const std::string nom , const int valeurInitial , int min);                              //constructeur de stat a valeur entiere

    explicit StatistiqueMinBornedConst(const std::string nom , const NumericValue& valeurInitial, const double min );                    //constructeur avec une numerical value
    explicit StatistiqueMinBornedConst(const std::string nom , const double valeurInitial , double min);                              //constructeur de stat a valeur entiere

    StatistiqueMinBornedConst(const StatistiqueMinBornedConst &stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMinBornedConst() throw ();

protected:

    //operateur
    virtual StatistiqueMinBornedConst& operator = (const StatistiqueMinBornedConst& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMinValue()const;                                                   //donne la valeur min

private:
    //constructeur
    void generalConstructeur(NumericValue *min);

    //variable
    NumericValue* minValue;
};

#endif // STATISTIQUEMINBORNEDCONST_H
