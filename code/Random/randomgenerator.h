#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <vector>
#include <unordered_map>

#include "randomcell.h"
#include "../Exception/not100pourcenttotalexception.h"
#include "../Exception/notsamesizeexception.h"

//class de generation de valeur random non equiprobable
template <typename T> class RandomGenerator{

public:
    static constexpr const unsigned long& CENT_POURCENT = RandomCell<T>::CENT_POURCENT;                                  //valeur du 100% en int

    //constructeur
    RandomGenerator(const std::vector< T*>& items ,const std::vector< int>& pourcentage) throw (Not100PourcentTotalException , NotSameSizeException);          //jette une exception si non 100 %   => % = int /100 000   et les items seront delete par le Generator

    //destructeur
    ~RandomGenerator() throw ();

    //fonction
    const T& getRandom();                                                          //donne une des valeur de facon aléatoire

protected:

private:
    //constructeur
    RandomGenerator(const RandomGenerator<T>& generator);                              //constructeur de recopie
    //operator
    RandomGenerator <T>& operator = (const RandomGenerator<T> & generator);         //operator de recopie

    //fonction
    void recupCoolDownItem();                                                       //remets les items qui on fini leurs cooldoown dans la liste d'item

    //getter
    std::vector<RandomCell<T>* >& getItems();
    std::unordered_map< int,std::vector<RandomCell<T>*> >& getCooldownItem();
    unsigned long& getNbTurn();

    //variable
    std::vector<RandomCell<T>*>* items;                                                //les items qui peuvent tomber
    std::unordered_map< int,std::vector<RandomCell<T>*> >* cooldownItem;                //les items qui ne peuvent plus tomber avant le tour numero int
    unsigned long* nbTurn;
    std::vector<RandomCell<T>*>* listAllItems;                                          //contient tous les cells


};

#include "randomgenerator.hpp"                                                      //inclusion du code

#endif //RANDOM_GENERATOR_H



//idée
//ajout des valeur en const ref
