#include "statistique.h"

#include "../Value/intvalue.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Statistique::Statistique(const std::string nom, const NumericValue &valeurInitial){
    this->generalConstructeur(nom,valeurInitial);
}
//------------------------------------------------------------------------------------------------------
Statistique::Statistique(const std::string nom, const int valeurInitial){
    this->generalConstructeur(nom,NumericValue(valeurInitial));
}
//------------------------------------------------------------------------------------------------------
Statistique::Statistique(const std::string nom, const double valeurInitial){
    this->generalConstructeur(nom,NumericValue(valeurInitial));
}
//------------------------------------------------------------------------------------------------------
Statistique::Statistique(const Statistique &stat){
    this->generalConstructeur(stat.getName(),stat.getValue());
}
//------------------------------------------------------------------------------------------------------
void Statistique::generalConstructeur(const std::string& nom, const NumericValue &valeurInitial){
    this->nom = new std::string(nom);
    this->valeur = new NumericValue(valeurInitial);
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Statistique::~Statistique(){
    if(nom != NULL){
        delete nom;
    }
    if(valeur != NULL){
        delete valeur;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Statistique& Statistique::operator =(const Statistique& stat){
    if( this != &stat){
        (*nom) = stat.getName();
        (*valeur) = stat.getValue();
    }
    return *this;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator +(const Statistique& stat)const{
    return this->getValue() + stat.getValue();
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator +(const NumericValue& valeur)const{
    return this->getValue() + valeur;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator +(const int nombre) const{
    const NumericValue number (nombre);
    return this->getValue() + number;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator -(const Statistique& stat)const{
    return this->getValue() - stat.getValue();
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator -(const NumericValue& valeur)const{
    return this->getValue() - valeur;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator -(const int nombre) const{
    const NumericValue number (nombre);
    return this->getValue() - number;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator *(const Statistique& stat)const throw (NoPossibleOperationException){
    return this->getValue() * stat.getValue();
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator *(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() * valeur;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator *(const int nombre) const throw (NoPossibleOperationException){
    const NumericValue number (nombre);
    return this->getValue() * number;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator /(const Statistique& stat)const throw (NoPossibleOperationException){
    return this->getValue() / stat.getValue();
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator /(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() / valeur;
}
//------------------------------------------------------------------------------------------------------
NumericValue Statistique::operator /(const int nombre) const throw (NoPossibleOperationException){
    const NumericValue number (nombre);
    return this->getValue() / number;
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator ==(const Statistique& stat) const{
    return this->getName() == stat.getName() && this->getValue() == stat.getValue();
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator ==(const NumericValue& valeur)const{
    return this->getValue() == valeur;
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator >(const Statistique& stat) const throw (NoPossibleOperationException){
    return this->getValue() > stat.getValue();
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator >(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() > valeur;
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator >=(const Statistique& stat) const throw (NoPossibleOperationException){
    return this->getValue() >= stat.getValue();
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator >=(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() >= valeur;
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator <(const Statistique& stat) const throw (NoPossibleOperationException){
    return this->getValue() < stat.getValue();
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator <(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() < valeur;
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator <=(const Statistique& stat) const throw (NoPossibleOperationException){
    return this->getValue() <= stat.getValue();
}
//------------------------------------------------------------------------------------------------------
bool Statistique::operator <=(const NumericValue& valeur)const throw (NoPossibleOperationException){
    return this->getValue() <= valeur;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
std::string Statistique::toString() const{
    return this->getName() + ":" + this->getValue().toString();
}
//------------------------------------------------------------------------------------------------------
const std::string& Statistique::getName()const{
    return *nom;
}
//------------------------------------------------------------------------------------------------------
const NumericValue& Statistique::getValue() const{
    return * valeur;
}
//------------------------------------------------------------------------------------------------------
void Statistique::increaseStat(const NumericValue &valeur){
    (*(this->valeur)) += valeur;
}
//------------------------------------------------------------------------------------------------------
void Statistique::decreaseStat(const NumericValue &valeur){
    (*(this->valeur)) -= valeur;
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
