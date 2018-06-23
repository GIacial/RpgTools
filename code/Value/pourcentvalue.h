#ifndef POURCENTVALUE_H
#define POURCENTVALUE_H

#include "numericvalueInterface.h"

//definit une valeur numerique : le pourcentage
class PourcentValue : public NumericValueInterface
{
public:
    //constructeur
    explicit PourcentValue(const int valeur , const int max);                       //constructeur a partir d'une valeur et d'un max
    explicit PourcentValue(const double frequence);                                 //constructeur a partir d'une nombre qui multiplier par xent donne un pourcentage
    PourcentValue(const PourcentValue& val);                                        //constructeur de copie

    //destructeur
    virtual ~PourcentValue() throw ();

    //operator
    PourcentValue& operator = (const PourcentValue& PourcentValue);                 //copie

    //fonction
    const double& getValue()const;                                                  //donne la frequence du pourcentage

    //fonction hérité
    //operateur
    virtual NumericValueInterface* operator + (const NumericValueInterface & val)const ;                                             //addition
    virtual NumericValueInterface* operator - (const NumericValueInterface & val)const ;                                             //soustraction
    virtual NumericValueInterface* operator * (const NumericValueInterface & val)const throw (NoPossibleOperationException) ;                                             //multiplication
    virtual NumericValueInterface* operator / (const NumericValueInterface & val)const throw (NoPossibleOperationException) ;                                             //division
    virtual bool  operator == (const NumericValueInterface& val)const ;                                                      //egalite

    virtual bool operator < (const NumericValueInterface& val)const throw (NoPossibleOperationException) ;                                //inférieur
    virtual bool operator > (const NumericValueInterface& val)const throw (NoPossibleOperationException) ;                                //superieur


    //fonction
    virtual NumericValueInterface* clone()const ;                                                                              //copie
    virtual std::string toString()const ;                                                                            //donne la string qui correspond a la valeur

    //calcul avec IntValue
    virtual NumericValueInterface* addition (const IntValue & val)const ;                                             //addition
    virtual NumericValueInterface* souctraction (const IntValue & val)const ;                                             //soustraction
    virtual NumericValueInterface* multiplication (const IntValue & val)const throw (NoPossibleOperationException)  ;                                             //multiplication
    virtual NumericValueInterface* division (const IntValue & val)const throw (NoPossibleOperationException) ;                                             //division
    virtual bool egal(const IntValue& val)const ;                                                                     //egalite

    virtual bool inferieur (const IntValue& val)const throw (NoPossibleOperationException) ;                                //inférieur
    virtual bool superieur (const IntValue& val)const throw (NoPossibleOperationException) ;                                //superieur


    //calcul avec PourcentValue
    virtual NumericValueInterface* addition (const PourcentValue & val)const ;                                             //addition
    virtual NumericValueInterface* souctraction (const PourcentValue & val)const ;                                             //soustraction
    virtual NumericValueInterface* multiplication (const PourcentValue & val)const throw (NoPossibleOperationException) ;                                             //multiplication
    virtual NumericValueInterface* division (const PourcentValue & val)const throw (NoPossibleOperationException) ;                                             //division
    virtual bool egal(const PourcentValue& val)const ;                                                                     //egalite

    virtual bool inferieur (const PourcentValue& val)const throw (NoPossibleOperationException) ;                                //inférieur
    virtual bool superieur (const PourcentValue& val)const throw (NoPossibleOperationException) ;                                //superieur



private:
    double* frequence;
};

#endif // POURCENTVALUE_H
