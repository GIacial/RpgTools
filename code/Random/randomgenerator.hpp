#ifndef RANDOMGENERATOR_HPP
#define RANDOMGENERATOR_HPP

//#include "randomgenerator.h"            //a enlever apres avoir mis en hpp
#include <iostream>

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomGenerator<T>::RandomGenerator(const std::vector< T *> &items, const std::vector< int> &pourcentage) throw (Not100PourcentTotalException , NotSameSizeException){
    if(items.size() != pourcentage.size()){
        //exeption
        throw NotSameSizeException();
    }
    int total = 0;
    for(unsigned int i = 0 ; i < pourcentage.size() ; i++){
        total += pourcentage[i];
    }
    if(total != RandomCell<T>::CENT_POURCENT){
        //exception
        throw Not100PourcentTotalException();
    }

    //debut du constructeur
    this->cooldownItem = new std::unordered_map< int,std::vector<RandomCell<T>*> >();
    this->items = new std::vector<RandomCell<T>*>();
    this->listAllItems = new std::vector<RandomCell<T>*>();
    this->nbTurn = new unsigned long(0);

    for(unsigned int i = 0 ; i < pourcentage.size() ; i++){
        if(pourcentage[i] > 0){
            RandomCell<T> * cell = new RandomCell<T>(items[i],pourcentage[i]);
            this->items->push_back(cell);
            this->listAllItems->push_back(cell);
        }
    }
}
//------------------------------------------------------------------------------------------------------
template <typename T> RandomGenerator<T>::RandomGenerator(const RandomGenerator<T> &){
    this->cooldownItem = nullptr;
    this->items = nullptr;
    this->nbTurn = nullptr;
    this->listAllItems = nullptr;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomGenerator<T>::~RandomGenerator() throw (){
    if(nbTurn != nullptr){
        delete nbTurn;
    }
    if(items != nullptr){
        delete items;
    }
    if(cooldownItem != nullptr){

        delete cooldownItem;
    }
    if(listAllItems != nullptr){
        for(unsigned int i = 0 ; i < listAllItems->size() ; i++){
            RandomCell<T>* cell = listAllItems->at(i);
            delete cell;
            listAllItems->at(i) = nullptr;
        }
        delete listAllItems;
    }
}
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------Operator------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> RandomGenerator<T>& RandomGenerator<T>::operator =(const RandomGenerator <T> &){
    return *this;
}
//------------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------------
//----------------------------------public fonction-----------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> const T&  RandomGenerator<T>::getRandom(){

    //reset si on a fait 100% des tirages
    if(this->getNbTurn() >= RandomGenerator<T>::CENT_POURCENT){
        this->reset();
    }
    //choix de l'item
    int position = 0;
    if(this->getItems().size() > 1){
        position = rand()%this->getItems().size();
    }
    RandomCell<T>* item = this->getItems().at(position);
    this->getNbTurn() ++;

    const T & result = item->getItem();


    //vérif du M
    const unsigned long turn = item->getTurn();

       // std::cerr << "? -> "<< item->getPourcentageReel(this->getNbTurn()) << " item :" << result << " : " << turn << ">" << this->getNbTurn() << std::endl;

    if(this->getItems().size() > 1 && turn > this->getNbTurn() ){
       // std::cerr << "item :" << result << " : " << turn << ">" << this->getNbTurn() << std::endl;
        this->getItems().at(position) = this->getItems().at(this->getItems().size()-1);     //remplace l'item par le dernier
        this->getItems().pop_back();                                                        //enleve le dernnier

        auto it = this->getCooldownItem().find(turn);
        if( it != this->getCooldownItem().end()){
            //on a déjà une list
            std::vector <RandomCell<T>*>& list = it->second;
            list.push_back(item);
        }
        else{
            //pas trouver on ajoute la liste
            this->getCooldownItem().insert({turn,{item}});
        }
    }

    this->recupCoolDownItem();                                  //recup les items qui ont fini le cooldown

    return result;
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
template <typename T> void RandomGenerator<T>::recupCoolDownItem(){
    const unsigned long & turn = this->getNbTurn();
    auto it = this->getCooldownItem().find(turn);
    if( it != this->getCooldownItem().end()){
        //recup les items
        std::vector<RandomCell<T>*>& list = it->second;
        for(unsigned int i = 0 ; i < list.size() ; i++){
            this->getItems().push_back(list[i]);
        }
        this->getCooldownItem().erase(it);              //suppression
    }
}
//------------------------------------------------------------------------------------------------------
template <typename T> void RandomGenerator<T>::reset(){
    this->getCooldownItem().clear();
    std::vector<RandomCell<T>*>& randomItems = this->getItems();
    randomItems.clear();
    for(unsigned int i = 0 ; i < listAllItems->size(); i++){
        RandomCell<T>* cell = listAllItems->at(i);
        cell->reset();
        randomItems.push_back(cell);

    }
    this->getNbTurn() = 0;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------private getter------------------------------------------------------
//------------------------------------------------------------------------------------------------------
template <typename T> std::vector<RandomCell<T>*>& RandomGenerator<T>::getItems(){
    return * (this->items);
}
//------------------------------------------------------------------------------------------------------
template <typename T> std::unordered_map< int, std::vector<RandomCell<T>*> >& RandomGenerator<T>::getCooldownItem(){
    return * (this->cooldownItem);
}
//------------------------------------------------------------------------------------------------------
template <typename T> unsigned long& RandomGenerator<T>::getNbTurn(){
    return *nbTurn;
}
//------------------------------------------------------------------------------------------------------
//----------------------------------private setter------------------------------------------------------
//------------------------------------------------------------------------------------------------------
#endif // RANDOMGENERATOR_HPP
