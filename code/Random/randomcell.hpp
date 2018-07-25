#ifndef RANDOM_CELL_HPP
#define RANDOM_CELL_HPP

//#include "randomcell.h"         //a enlever apres avoir mis en hpp

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomCell<T>::RandomCell(const T *item, const int pourcentage){
    this->item = item;
    this->pourcentage = new unsigned long(pourcentage);
    this->nbTimeTaken = new unsigned long (0);
}
//------------------------------------------------------------------------------------------------------
template <typename T> RandomCell<T>::RandomCell(const RandomCell<T> &){
    this->item = nullptr;
    this->pourcentage = nullptr;
    this->nbTimeTaken = nullptr;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomCell<T>::~RandomCell() throw (){
    if(item != nullptr){
        delete item;
    }
    if(pourcentage != nullptr){
        delete pourcentage;
    }
    if(nbTimeTaken != nullptr){
        delete nbTimeTaken;
    }
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomCell<T>& RandomCell<T>::operator =(const RandomCell<T>&){
    return * this;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T>  unsigned long RandomCell<T>::getPourcentageReel(const unsigned long& nbTurn)const{
    return this->getNbTimeTaken()* CENT_POURCENT/nbTurn ;
}
//------------------------------------------------------------------------------------------------------
template <typename T> unsigned long RandomCell<T>::getTurn()const{
    return this->getNbTimeTaken() * CENT_POURCENT / this->getPourcentageTheorique();
}
//------------------------------------------------------------------------------------------------------
template <typename T> const T& RandomCell<T>::getItem()const{
    this->getNbTimeTaken() ++ ;

    return *(this->item);
}
//------------------------------------------------------------------------------------------------------
//----------------------------------public getter-------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> const unsigned long& RandomCell<T>::getPourcentageTheorique()const{
    return *(this->pourcentage);
}
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
template <typename T>  unsigned long & RandomCell<T>::getNbTimeTaken()const{
    return *(this->nbTimeTaken);
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


#endif //RANDOM_CELL_HPP
