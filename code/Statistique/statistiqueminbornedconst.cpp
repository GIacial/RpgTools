#include "statistiqueminbornedconst.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void StatistiqueMinBornedConst::generalConstructeur( NumericValue* min){
    this->minValue = min;
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const StatistiqueMinBornedConst &stat)
    :StatistiqueMinBorned(stat)
{
    this->generalConstructeur(new NumericValue(stat.getValue()));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const NumericValue &valeurInitial , const NumericValue& min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const int valeurInitial , const NumericValue& min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const double valeurInitial , const NumericValue& min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const NumericValue &valeurInitial , const int min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const int valeurInitial , const int min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const double valeurInitial , const double min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::StatistiqueMinBornedConst(const std::string nom, const NumericValue &valeurInitial , const double min)
    : StatistiqueMinBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(min));
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst::~StatistiqueMinBornedConst() throw (){
    if( minValue != NULL){
        delete minValue;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
StatistiqueMinBornedConst& StatistiqueMinBornedConst::operator =(const StatistiqueMinBornedConst& stat){
    if(this != &stat){
        StatistiqueMinBorned::operator =(stat);
        (*(this->minValue)) = stat.getMinValue();
    }
    return * this;
}

//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------

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
const NumericValue& StatistiqueMinBornedConst::getMinValue() const{
    return * minValue;
}

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

