#ifndef STATISTIQUEMAXBORNED_H
#define STATISTIQUEMAXBORNED_H


#include "statistique.h"


//stat qui ne peut pas etre inferieur au minimun
class StatistiqueMaxBorned : public Statistique
{
public:
    //constructeur
    explicit StatistiqueMaxBorned(const std::string nom , const NumericValue& valeurInitial );                    //constructeur avec une numerical value
    explicit StatistiqueMaxBorned(const std::string nom , const int valeurInitial);                              //constructeur de stat a valeur entiere
    explicit StatistiqueMaxBorned(const std::string nom , const double valeurInitial);                          //constructeur de stat a valeur de pourcentage

    StatistiqueMaxBorned(const StatistiqueMaxBorned&stat);                                                          //constructeur de recopie


    //destructeur
    virtual ~StatistiqueMaxBorned() throw ();


    //fonction
    virtual void decreaseStat(const NumericValue& valeur)  throw (NoPossibleOperationException);                  //diminue la statistique par la valeur
    virtual void increaseStat(const NumericValue& valeur) throw (NoPossibleOperationException);                  //augmente la statistique par la valeur

protected:

    //operateur
    virtual StatistiqueMaxBorned& operator = (const StatistiqueMaxBorned& stat);                          //operateur de recopie

    //fonction
    virtual const NumericValue& getMaxValue()const = 0;                                                   //donne la valeur min

private:
    void verifBorneMax() throw (NoPossibleOperationException);                                                                                 //verif et change la valeur en fonction de la borne min

};

#endif // STATISTIQUEMAXBORNED_H
