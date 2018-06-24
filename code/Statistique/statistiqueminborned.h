#ifndef STATISTIQUEMINBORNED_H
#define STATISTIQUEMINBORNED_H

#include "statistique.h"


//stat qui ne peut pas etre inferieur au minimun
class StatistiqueMinBorned : public Statistique
{
public:
    //constructeur
    explicit StatistiqueMinBorned(const std::string nom , const NumericValue& valeurInitial );                    //constructeur avec une numerical value
    explicit StatistiqueMinBorned(const std::string nom , const int valeurInitial);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMinBorned(const std::string nom , const double valeurInitial);                          //constructeur de stat a valeur de pourcentage

    StatistiqueMinBorned(const StatistiqueMinBorned&stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMinBorned() throw ();


    //fonction
    virtual void decreaseStat(const NumericValue& valeur)  throw (NoPossibleOperationException);                  //diminue la statistique par la valeur
    virtual void increaseStat(const NumericValue& valeur) throw (NoPossibleOperationException);                  //augmente la statistique par la valeur

protected:

    //operateur
    virtual StatistiqueMinBorned& operator = (const StatistiqueMinBorned& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMinValue()const = 0;                                                   //donne la valeur min

private:
    void verifBorneMin() throw (NoPossibleOperationException);                                                                                 //verif et change la valeur en fonction de la borne min

};

#endif // STATISTIQUEMINBORNED_H
