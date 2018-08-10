#ifndef RANDOMCELL_H
#define RANDOMCELL_H


template <typename T> class RandomCell
{

public:
    //static

    static constexpr const unsigned long& CENT_POURCENT = 100000;                                  //valeur du 100% en int
    //constructeur
    RandomCell(const T* item , const int pourcentage);                              //item sera supprimer par la cell

    //destructeur
    ~RandomCell() throw ();

    //fonction
    const T& getItem()const;                                                        //donne item
    const unsigned long& getPourcentageTheorique()const;                                      //donne le pourcentage
    unsigned long getTurn()const;                                      //donne le tour où le pourcentage de pris est inférieur au pourcentage réél
    unsigned long getPourcentageReel(const unsigned long& nbTurn)const;                           //donne le pourcentage reel
    void reset();                                                                                 //mets le nmbre de prit à 0

protected:

private:
    //constructeur
    RandomCell(const RandomCell<T>&);

    //operator
    RandomCell& operator = (const RandomCell<T>&);

    //fonction
    unsigned long& getNbTimeTaken()const;                                               //donne le nombre de fois où il a était pris


    //variable
    const T * item;
    const unsigned long* pourcentage;
    unsigned long* nbTimeTaken;


};

#include "randomcell.hpp"

#endif // RANDOMCELL_H
