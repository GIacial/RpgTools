#include <cmath>

#include "intvalue.h"
#include "pourcentvalue.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
IntValue::IntValue(const int val) : NumericValueInterface()
{
    this->valeur = new int(val);
}
//------------------------------------------------------------------------------------------------------
IntValue::IntValue(const IntValue &val) : NumericValueInterface(val)
{
    this->valeur = new int (val.getValue());
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
IntValue::~IntValue() throw (){
    if(valeur != nullptr){
        delete valeur;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
IntValue& IntValue::operator =(const IntValue& val){
    if(this != & val){
        NumericValueInterface::operator =(val);
        (*valeur) = val.getValue();
    }
    return * this;
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::operator +(const NumericValueInterface& val) const{
    return val.addition(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::operator -(const NumericValueInterface& val) const{
    return val.souctraction(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::operator *(const NumericValueInterface& val) const throw (NotSameTypeException){
    return val.multiplication(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::operator /(const NumericValueInterface& val) const throw (NotSameTypeException){
    return val.division(*this);
}
//------------------------------------------------------------------------------------------------------
bool IntValue::operator ==(const NumericValueInterface& val) const{
    return val.egal(*this);
}
//------------------------------------------------------------------------------------------------------
bool IntValue::operator <(const NumericValueInterface& val) const throw (NotSameTypeException){
    return val.inferieur(*this);
}
//------------------------------------------------------------------------------------------------------
bool IntValue::operator >(const NumericValueInterface& val) const throw (NotSameTypeException){
    return val.superieur(*this);
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::clone()const{
    return new IntValue(*this);
}
//------------------------------------------------------------------------------------------------------
std::string IntValue::toString()const{
    return std::to_string(this->getValue());
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::addition(const IntValue &val) const{
    return new IntValue(val.getValue() + this->getValue());
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::souctraction(const IntValue &val) const{
    return new IntValue(val.getValue() - this->getValue());
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::multiplication(const IntValue &val) const throw (NotSameTypeException){
    return new IntValue(val.getValue() * this->getValue());
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::division(const IntValue &val) const throw (NotSameTypeException){
    return new IntValue(val.getValue() / this->getValue());
}
//------------------------------------------------------------------------------------------------------
bool IntValue::egal(const IntValue &val) const{
    return val.getValue() == this->getValue();
}
//------------------------------------------------------------------------------------------------------
bool IntValue::inferieur(const IntValue &val) const throw(NotSameTypeException){
    return val.getValue() < this->getValue();
}
//------------------------------------------------------------------------------------------------------
bool IntValue::superieur(const IntValue &val) const throw(NotSameTypeException){
    return val.getValue() > this->getValue();
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::addition(const PourcentValue &val) const{
    return new IntValue(std::round(this->getValue()*(1+val.getValue())));
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::souctraction(const PourcentValue &val) const{
    return new IntValue(std::round(this->getValue()*(1-val.getValue())));
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::multiplication(const PourcentValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return NULL;
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* IntValue::division(const PourcentValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return NULL;
}
//------------------------------------------------------------------------------------------------------
bool IntValue::egal(const PourcentValue &) const{
    return false;
}
//------------------------------------------------------------------------------------------------------
bool IntValue::inferieur(const PourcentValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return false;
}
//------------------------------------------------------------------------------------------------------
bool IntValue::superieur(const PourcentValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return false;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public getter-------------------------------------------------------
//------------------------------------------------------------------------------------------------------
const int& IntValue::getValue() const{
    return *valeur;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public setter-------------------------------------------------------
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------protected fonction--------------------------------------------------
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------protected getter----------------------------------------------------
//------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------
//----------------------------------protected setter----------------------------------------------------
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------private fonction----------------------------------------------------
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------private getter------------------------------------------------------
//------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------
//----------------------------------private setter------------------------------------------------------
//------------------------------------------------------------------------------------------------------
