#include "notsamesizeexception.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NotSameSizeException::NotSameSizeException() : Exception("Les arguments n'ont pas la même taille")
{

}
//------------------------------------------------------------------------------------------------------
NotSameSizeException::NotSameSizeException(const NotSameSizeException &e) : Exception(e){

}

//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NotSameSizeException::~NotSameSizeException() throw (){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
NotSameSizeException& NotSameSizeException::operator =(const NotSameSizeException& e){
    Exception::operator =(e);
    return *this;
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
