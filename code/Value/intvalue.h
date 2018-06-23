#ifndef INTVALUE_H
#define INTVALUE_H

#include "numericvalueinterface.h"

//class qui definit une valeur entiere
class IntValue : public NumericValueInterface
{
public:
    //constructeur
    explicit IntValue(const int val);
    IntValue(const IntValue& val);

    //destructeur
    virtual ~IntValue() throw ();

    //operator
    IntValue& operator = (const IntValue& val);

    virtual NumericValueInterface* operator + (const NumericValueInterface & val)const ;                                             //addition
    virtual NumericValueInterface* operator - (const NumericValueInterface & val)const ;                                             //soustraction
    virtual NumericValueInterface* operator * (const NumericValueInterface & val)const throw (NoPossibleOperationException) ;                                             //multiplication
    virtual NumericValueInterface* operator / (const NumericValueInterface & val)const throw (NoPossibleOperationException) ;                                             //division
    virtual bool  operator == (const NumericValueInterface& val)const;                                                          //egalite
    virtual bool operator < (const NumericValueInterface& val)const throw (NoPossibleOperationException);                                //inférieur
    virtual bool operator > (const NumericValueInterface& val)const throw (NoPossibleOperationException);                                //superieur


    //fonction
    const int& getValue()const;

    virtual NumericValueInterface* clone()const ;                                                                              //copie
    virtual std::string toString()const;                                                                            //donne la string qui correspond a la valeur

    //calcul avec IntValue
    virtual NumericValueInterface* addition (const IntValue & val)const ;                                             //addition
    virtual NumericValueInterface* souctraction (const IntValue & val)const ;                                             //soustraction
    virtual NumericValueInterface* multiplication (const IntValue & val)const throw (NoPossibleOperationException);                                             //multiplication
    virtual NumericValueInterface* division (const IntValue & val)const throw (NoPossibleOperationException);                                             //division
    virtual bool egal(const IntValue& val)const ;                                                                     //egalite

    virtual bool inferieur (const IntValue& val)const throw (NoPossibleOperationException) ;                                //inférieur
    virtual bool superieur (const IntValue& val)const throw (NoPossibleOperationException) ;                                //superieur

    //calcul avec PourcentValue
    virtual NumericValueInterface* addition (const PourcentValue & val)const ;                                             //addition
    virtual NumericValueInterface* souctraction (const PourcentValue & val)const ;                                             //soustraction
    virtual NumericValueInterface* multiplication (const PourcentValue & val)const throw (NoPossibleOperationException);                                             //multiplication
    virtual NumericValueInterface* division (const PourcentValue & val)const throw (NoPossibleOperationException);                                             //division
    virtual bool egal(const PourcentValue& val)const ;                                                                     //egalite

    virtual bool inferieur (const PourcentValue& val)const throw (NoPossibleOperationException) ;                                //inférieur
    virtual bool superieur (const PourcentValue& val)const throw (NoPossibleOperationException) ;                                //superieur


protected:




private:
    int* valeur;
};

#endif // INTVALUE_H
