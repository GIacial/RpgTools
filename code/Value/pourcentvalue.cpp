#include "pourcentvalue.h"
#include "intvalue.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
PourcentValue::PourcentValue(const double frequence) : NumericValueInterface(){
    this->frequence = new double(frequence);
}
//------------------------------------------------------------------------------------------------------
PourcentValue::PourcentValue(const int valeur, const int max): NumericValueInterface(){
    this->frequence = new double((double)valeur/max);
}
//------------------------------------------------------------------------------------------------------
PourcentValue::PourcentValue(const PourcentValue &val) : NumericValueInterface(val){
    this->frequence = new double(val.getValue());
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
PourcentValue::~PourcentValue() throw (){
    if(frequence != nullptr){
        delete frequence;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
PourcentValue& PourcentValue::operator =(const PourcentValue& val){
    if(this != & val){
        NumericValueInterface::operator =(val);
        (*frequence) = val.getValue();
    }
    return * this;
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::operator +(const NumericValueInterface& val)const{
    return val.addition(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::operator -(const NumericValueInterface& val)const{
    return val.souctraction(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::operator *(const NumericValueInterface& val)const throw (NotSameTypeException){
    return val.multiplication(*this);
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::operator /(const NumericValueInterface& val)const throw (NotSameTypeException){
    return val.division(*this);
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::operator ==(const NumericValueInterface& val)const{
    return val.egal(*this);
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::operator < (const NumericValueInterface& val)const throw (NotSameTypeException){
    return val.inferieur(*this);
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::operator > (const NumericValueInterface& val)const throw (NotSameTypeException){
    return val.superieur(*this);
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
const double& PourcentValue::getValue() const{
    return *frequence;
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::clone()const{
    return new PourcentValue(*this);
}
//------------------------------------------------------------------------------------------------------
std::string PourcentValue::toString()const{
    int entier = 100*this->getValue();
    int decimal = 10000*this->getValue() - 100*entier;
    return std::to_string(entier)+","+std::to_string(decimal) + " %";
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::addition(const IntValue &val) const{
    return val.addition(*this);                     //comme pourcent + int
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::souctraction(const IntValue &val) const{
    return val.souctraction(*this);                     //comme pourcent - int
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::multiplication(const IntValue &val) const throw (NotSameTypeException){
    return val.multiplication(*this);                     //comme pourcent * int
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::division(const IntValue &val) const throw (NotSameTypeException){
    return val.division(*this);                     //comme pourcent / int
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::egal(const IntValue &) const{
    return false;
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::inferieur(const IntValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return false;
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::superieur(const IntValue &) const throw (NotSameTypeException){
    throw NotSameTypeException();
    return false;
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::addition(const PourcentValue &val) const{
    return new PourcentValue(val.getValue() + this->getValue() );
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::souctraction(const PourcentValue &val) const{
    return new PourcentValue(val.getValue() - this->getValue() );
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::multiplication(const PourcentValue &val) const throw (NotSameTypeException){
    return new PourcentValue(val.getValue() * this->getValue() );
}
//------------------------------------------------------------------------------------------------------
NumericValueInterface* PourcentValue::division(const PourcentValue &val) const throw (NotSameTypeException){
    return new PourcentValue(val.getValue() / this->getValue() );
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::egal(const PourcentValue &val) const{
    return val.getValue() == this->getValue();
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::inferieur(const PourcentValue &val) const throw (NotSameTypeException){

    return val.getValue() < this->getValue();
}
//------------------------------------------------------------------------------------------------------
bool PourcentValue::superieur(const PourcentValue &val) const throw (NotSameTypeException){

    return val.getValue() > this->getValue();
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


//------------------------------------------------------------------------------------------------------
//----------------------------------private setter------------------------------------------------------
//------------------------------------------------------------------------------------------------------
