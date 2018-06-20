#ifndef NUMERICVALUEINTERFACE_H
#define NUMERICVALUEINTERFACE_H

#include "../Exception/notsametypeexception.h"

//fille de la classe
class IntValue;
class PourcentValue;

class  NumericValueInterface                                                                                     //definit une valeur numeric utiliser par la classe NumericValue
{
public:
    //destructeur
    virtual ~NumericValueInterface () throw () = 0;   //destructeur de numericValue

    //operateur
    virtual NumericValueInterface* operator + (const NumericValueInterface & val)const = 0;                                             //addition
    virtual NumericValueInterface* operator - (const NumericValueInterface & val)const = 0;                                             //soustraction
    virtual NumericValueInterface* operator * (const NumericValueInterface & val)const throw (NotSameTypeException) = 0;                                             //multiplication
    virtual NumericValueInterface* operator / (const NumericValueInterface & val)const throw (NotSameTypeException) = 0;                                             //division
    virtual bool  operator == (const NumericValueInterface& val)const = 0;                                                      //egalite

    virtual bool operator < (const NumericValueInterface& val)const throw (NotSameTypeException) = 0;                                //inférieur
    virtual bool operator > (const NumericValueInterface& val)const throw (NotSameTypeException) = 0;                                //superieur


    //fonction
    virtual NumericValueInterface* clone()const = 0;                                                                              //copie
    virtual std::string toString()const = 0;                                                                            //donne la string qui correspond a la valeur

    //calcul avec IntValue
    virtual NumericValueInterface* addition (const IntValue & val)const = 0;                                             //addition
    virtual NumericValueInterface* souctraction (const IntValue & val)const = 0;                                             //soustraction
    virtual NumericValueInterface* multiplication (const IntValue & val)const throw (NotSameTypeException) = 0 ;                                             //multiplication
    virtual NumericValueInterface* division (const IntValue & val)const throw (NotSameTypeException) = 0;                                             //division
    virtual bool egal(const IntValue& val)const = 0;                                                                     //egalite

    virtual bool inferieur (const IntValue& val)const throw (NotSameTypeException) = 0;                                //inférieur
    virtual bool superieur (const IntValue& val)const throw (NotSameTypeException) = 0;                                //superieur


    //calcul avec PourcentValue
    virtual NumericValueInterface* addition (const PourcentValue & val)const = 0;                                             //addition
    virtual NumericValueInterface* souctraction (const PourcentValue & val)const = 0;                                             //soustraction
    virtual NumericValueInterface* multiplication (const PourcentValue & val)const throw (NotSameTypeException) = 0;                                             //multiplication
    virtual NumericValueInterface* division (const PourcentValue & val)const throw (NotSameTypeException) = 0;                                             //division
    virtual bool egal(const PourcentValue& val)const = 0;                                                                     //egalite

    virtual bool inferieur (const PourcentValue& val)const throw (NotSameTypeException) = 0;                                //inférieur
    virtual bool superieur (const PourcentValue& val)const throw (NotSameTypeException) = 0;                                //superieur


protected:
   //constructeur
    explicit NumericValueInterface ();                                                                                     //constructeur
    NumericValueInterface (const NumericValueInterface&);                                                                        //constructeur de recopie

    //operateur
    NumericValueInterface& operator = (const NumericValueInterface  &val);                                                       //operateur de copie





private:

};

#endif // NUMERICVALUEINTERFACE_H
