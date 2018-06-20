#ifndef TEST_POURCENTVALUE_H
#define TEST_POURCENTVALUE_H


#include <QObject>
#include <QtTest/QtTest>

class Test_PourcentValue : public QObject
{
    Q_OBJECT
public:
    explicit Test_PourcentValue();
    ~Test_PourcentValue() throw ();


private slots:

    void constructeur_object();                //test du constructeur de PourcentValue
    void constructeur_container();             //test du constructeur avec le contener

    void copie_constructeur();                 //test de la copie du constructeur
    void clone();                              //test du clone

    void affectation_object();                //test de l'affectation de l'object
    void affectation_container();               //test de l'affectation avce le container


    void addition_avec_IntValue();             //test de l'addition avec une int value
    void soustraction_avec_IntValue();          //test de la soustraction avec une int value
    void multiplication_avec_IntValue();        //test de la multiplication avec une int valu
    void division_avec_IntValue();             //test de l'addition avec une int value
    void inferieur_avecIntValue();              //test de l'inferieur avec un int value
    void inferieurEgal_avecIntValue();          //test de l'inferieur egal avec un int value
    void superieur_avecIntValue();              //test du superieur avec un int value
    void superieurEgal_avecIntValue();          //test du superieur egal avec un int value


    void addition_avec_PourcentValue();             //test de l'addition avec une Pourcent value
    void soustraction_avec_PourcentValue();          //test de la soustraction avec une Pourcent value
    void multiplication_avec_PourcentValue();        //test de la multiplication avec une Pourcent valu
    void division_avec_PourcentValue();             //test de l'addition avec une Pourcent value
    void inferieur_avecPourcentValue();              //test de l'inferieur avec un Pourcent value
    void inferieurEgal_avecPourcentValue();          //test de l'inferieur egal avec un Pourcent value
    void superieur_avecPourcentValue();              //test du superieur avec un Pourcent value
    void superieurEgal_avecPourcentValue();          //test du superieur egal avec un Pourcent value



private:
};

#endif // TEST_POURCENTVALUE_H
