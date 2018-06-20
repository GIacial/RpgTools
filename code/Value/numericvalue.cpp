#include "numericvalue.h"

#include "intvalue.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NumericValue::NumericValue(const int val){
    this->constructNumericValue(new IntValue(val));
}
//------------------------------------------------------------------------------------------------------
NumericValue::NumericValue(const NumericValue &val){
    this->constructNumericValue(val.getValue().clone());
}
//------------------------------------------------------------------------------------------------------
NumericValue::NumericValue(NumericValueInterface *val){
    this->constructNumericValue(val);
}
//------------------------------------------------------------------------------------------------------
void NumericValue::constructNumericValue(NumericValueInterface *val){
    this->valeur = val;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NumericValue::~NumericValue() throw (){
    if(this->valeur != nullptr){
        delete valeur;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NumericValue& NumericValue::operator =(const NumericValue &val){
    if(this != & val){
        delete this->valeur;
        this->constructNumericValue(val.getValue().clone());
    }
    return *this;
}
//------------------------------------------------------------------------------------------------------
NumericValue NumericValue::operator +(const NumericValue &val)const{
    NumericValue result (this->getValue() + val.getValue());
    return result;
}
//------------------------------------------------------------------------------------------------------
NumericValue NumericValue::operator -(const NumericValue &val) const{
    NumericValue result (this->getValue() - val.getValue());
    return result;
}
//------------------------------------------------------------------------------------------------------
NumericValue NumericValue::operator *(const NumericValue &val) const{
    NumericValue result (this->getValue() * val.getValue());
    return result;
}
//------------------------------------------------------------------------------------------------------
NumericValue NumericValue::operator /(const NumericValue &val) const{
    NumericValue result (this->getValue() / val.getValue());
    return result;
}
//------------------------------------------------------------------------------------------------------
NumericValue& NumericValue::operator += (const NumericValue &val){
    NumericValueInterface* result = this->getValue() + val.getValue();
    delete this->valeur;
    this->constructNumericValue(result);
    return *this;
}
//------------------------------------------------------------------------------------------------------
NumericValue& NumericValue::operator -= (const NumericValue &val){
    NumericValueInterface* result = this->getValue() - val.getValue();
    delete this->valeur;
    this->constructNumericValue(result);
    return *this;
}
//------------------------------------------------------------------------------------------------------
NumericValue& NumericValue::operator *= (const NumericValue &val){
    NumericValueInterface* result = this->getValue() * val.getValue();
    delete this->valeur;
    this->constructNumericValue(result);
    return *this;
}
//------------------------------------------------------------------------------------------------------
NumericValue& NumericValue::operator /= (const NumericValue &val){
    NumericValueInterface* result = this->getValue() / val.getValue();
    delete this->valeur;
    this->constructNumericValue(result);
    return *this;
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator == (const NumericValue& val)const{
    return this->getValue() == val.getValue();
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator == (const int val)const{
    IntValue second (val);
    return this->getValue() == second;
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator != (const NumericValue& val)const{
    return !(this->getValue() == val.getValue());
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator != (const int val)const{
    IntValue second (val);
    return !(this->getValue() == second);
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator < (const NumericValue& val)const throw (NotSameTypeException){
    return this->getValue() < val.getValue();
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator > (const NumericValue& val)const throw (NotSameTypeException){
    return this->getValue() > val.getValue();
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator <= (const NumericValue& val)const throw (NotSameTypeException){
    return this->getValue() < val.getValue() || this->getValue() == val.getValue();
}
//------------------------------------------------------------------------------------------------------
bool NumericValue::operator >= (const NumericValue& val)const throw (NotSameTypeException){
    return this->getValue() > val.getValue() || this->getValue() == val.getValue();
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
std::string NumericValue::toString()const{
    return this->getValue().toString();
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public getter-------------------------------------------------------
//------------------------------------------------------------------------------------------------------


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
const NumericValueInterface& NumericValue::getValue()const{
    return *valeur;
}

//------------------------------------------------------------------------------------------------------
//----------------------------------private setter------------------------------------------------------
//------------------------------------------------------------------------------------------------------
