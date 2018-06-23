#ifndef NUMERICVALUE_H
#define NUMERICVALUE_H

#include "numericvalueinterface.h"

class NumericValue                                                                                      //represente une valeur numerique
{
public:
    //constructeur
    explicit NumericValue(const int val);                                                                                         //constructeur
    explicit NumericValue(const int valeur , const int max);
    explicit NumericValue(const double frequence);
    NumericValue(const NumericValue& val);                                                                        //constructeur de recopie

    //destructeur
    virtual ~NumericValue() throw();

    //operateur
    virtual NumericValue& operator = (const NumericValue& val);                                                           //operateur de recopie

    NumericValue  operator + (const NumericValue& val)const;                                                           //addition
    NumericValue  operator - (const NumericValue& val)const;                                                           //soustraction
    NumericValue  operator * (const NumericValue& val)const throw (NoPossibleOperationException);                                                           //multiplication
    NumericValue  operator / (const NumericValue& val)const throw (NoPossibleOperationException);                                                           //division

    NumericValue& operator += (const NumericValue& val);                                                           //addition affectation
    NumericValue& operator -= (const NumericValue& val);                                                           //soustraction affectation
    NumericValue& operator *= (const NumericValue& val);                                                           //multiplication affectation
    NumericValue& operator /= (const NumericValue& val);                                                           //division affectation

    bool operator == (const NumericValue& val)const;                                                            //egalité
    bool operator == (const int val)const;                                                                      //egalité
    bool operator == (const double val)const;                                                                      //egalité
    bool operator != (const NumericValue& val)const;                                                            //diference
    bool operator != (const int val)const;                                                                      //diference
    bool operator != (const double val)const;                                                                      //diference

    bool operator < (const NumericValue& val)const throw (NoPossibleOperationException);                                //inférieur
    bool operator > (const NumericValue& val)const throw (NoPossibleOperationException);                                //superieur

    bool operator <= (const NumericValue& val)const throw (NoPossibleOperationException);                               //inférieur egal
    bool operator >= (const NumericValue& val)const throw (NoPossibleOperationException);                               //supérieur egal

    //fonction
    std::string toString()const;                                                                                //donne la string correspondant à la valeur

protected:

private:
    //constructeur fonction
    void constructNumericValue(NumericValueInterface* val);                                                 //constructeur général
    explicit NumericValue(NumericValueInterface* val);                                                               //constructeur a partir d'un resultat de calcul de NumericValueInterface

    //fonction
    const NumericValueInterface& getValue()const;                                                                //donne la valeur de cette valeur numeric

    //variable
    NumericValueInterface* valeur;                                                                          //la valeur numeric
};

#endif // NUMERICVALUE_H
