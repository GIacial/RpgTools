#include "statistiquemaxbornedconst.h"


//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void StatistiqueMaxBornedConst::generalConstructeur( NumericValue* max){
    this->maxValue = max;
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const StatistiqueMaxBornedConst &stat)
    :StatistiqueMaxBorned(stat)
{
    this->generalConstructeur(new NumericValue(stat.getMaxValue()));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const NumericValue &valeurInitial , const NumericValue& max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const int valeurInitial , const NumericValue& max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const double valeurInitial , const NumericValue& max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const NumericValue &valeurInitial , const int max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const int valeurInitial , const int max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const double valeurInitial , const double max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::StatistiqueMaxBornedConst(const std::string nom, const NumericValue &valeurInitial , const double max)
    : StatistiqueMaxBorned(nom,valeurInitial)
{
    this->generalConstructeur(new NumericValue(max));
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst::~StatistiqueMaxBornedConst() throw (){
    if( maxValue != NULL){
        delete maxValue;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
StatistiqueMaxBornedConst& StatistiqueMaxBornedConst::operator =(const StatistiqueMaxBornedConst& stat){
    if(this != &stat){
        StatistiqueMaxBorned::operator =(stat);
        (*(this->maxValue)) = stat.getMaxValue();
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
const NumericValue& StatistiqueMaxBornedConst::getMaxValue() const{
    return * maxValue;
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


