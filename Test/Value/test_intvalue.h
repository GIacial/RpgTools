#ifndef TEST_INTVALUE_H
#define TEST_INTVALUE_H

#include <QObject>
#include <QtTest/QtTest>

class Test_IntValue : public QObject
{
    Q_OBJECT
public:
    explicit Test_IntValue();
    ~Test_IntValue() throw ();


private slots:

    void constructeur_object();                //test du constructeur de IntValue
    void constructeur_container();             //test du constructeur avec le contener

    void copie_constructeur();                 //test de la copie du constructeur
    void clone();                              //test du clone

    void affectation_object();                //test de l'affectation de l'object
    void affectation_container();               //test de l'affectation avce le container

    void addition_avec_IntValue();             //test de l'addition avec une int value

    void soustraction_avec_IntValue();          //test de la soustraction avec une int value

    void multiplication_avec_IntValue();        //test de la multiplication avec une int value

    void division_avec_IntValue();             //test de l'addition avec une int value

    void inferieur_avecIntValue();              //test de l'inferieur avec un int value

    void inferieurEgal_avecIntValue();          //test de l'inferieur egal avec un int value

    void superieur_avecIntValue();              //test du superieur avec un int value

    void superieurEgal_avecIntValue();          //test du superieur egal avec un int value



private:
};

#endif // TEST_INTVALUE_H
