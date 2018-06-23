#ifndef STATISTIQUE_H
#define STATISTIQUE_H

#include <string>
#include "../Value/numericvalue.h"

//class qui definit ce qu'est une stat
class Statistique
{
public:
    //constructeur
    explicit Statistique(const std::string nom , const NumericValue& valeurInitial);                    //constructeur avec une numerical value
    explicit Statistique(const std::string nom , const int valeurInitial);                              //constructeur de stat a valeur entiere
    explicit Statistique(const std::string nom , const double valeurInitial);                          //constructeur de stat a valeur de pourcentage
    Statistique(const Statistique&);                                            //constructeur de recopie


    //destructeur
    virtual ~Statistique() throw ();

    //operateur
    virtual Statistique& operator = (const Statistique& stat);                          //operateur de recopie

    NumericValue operator +(const Statistique& stat)const;                      //addition
    NumericValue operator +(const NumericValue& valeur)const;                   //addition
    NumericValue operator +(const int nombre)const;                             //addition

    NumericValue operator -(const Statistique& stat)const;                      //soustraction
    NumericValue operator -(const NumericValue& valeur)const;                   //soustraction
    NumericValue operator -(const int nombre)const;                             //soustraction

    NumericValue operator *(const Statistique& stat)const throw (NoPossibleOperationException);                      //multiplication
    NumericValue operator *(const NumericValue& valeur)const throw (NoPossibleOperationException);                   //multiplication
    NumericValue operator *(const int nombre)const throw (NoPossibleOperationException);                             //multiplication

    NumericValue operator /(const Statistique& stat)const throw (NoPossibleOperationException);                      //division
    NumericValue operator /(const NumericValue& valeur)const throw (NoPossibleOperationException);                   //division
    NumericValue operator /(const int nombre)const throw (NoPossibleOperationException);                             //division

    bool operator == (const Statistique& stat)const;                                            //comparaison d'égalité nom et valeur
    bool operator == (const NumericValue& valeur)const;                                         //comparaison d'égalité de valeur

    bool operator >  (const Statistique& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator >= (const Statistique& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator <  (const Statistique& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator <= (const Statistique& stat)const throw (NoPossibleOperationException);        //comparaison de valeur

    bool operator >  (const NumericValue& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator >= (const NumericValue& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator <  (const NumericValue& stat)const throw (NoPossibleOperationException);        //comparaison de valeur
    bool operator <= (const NumericValue& stat)const throw (NoPossibleOperationException);        //comparaison de valeur

    //fonction
    const NumericValue& getValue()const;                                 //donne la valeur de la stat

    const std::string& getName()const ;                                                //renvoi le nom de la stat
    std::string toString()const;                                                //transforme la stat en string

    virtual void increaseStat(const NumericValue& valeur);                  //augmente la statistique par la valeur
    virtual void decreaseStat(const NumericValue& valeur);                  //diminue la statistique par la valeur

protected:

private:
    //constructeur
    void generalConstructeur(const std::string &nom, const NumericValue &valeurInitial);
    //variable
    std::string* nom;
    NumericValue* valeur;
};

#endif // STATISTIQUE_H
