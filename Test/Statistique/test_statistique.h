#ifndef TEST_STATISTIQUE_H
#define TEST_STATISTIQUE_H

#include <QObject>
#include <QtTest/QtTest>

class Test_Statistique : public QObject
{
    Q_OBJECT
public:
    explicit Test_Statistique();
    ~Test_Statistique() throw ();

signals:

private slots:
    void test_constructeur();                                       //test du constructeur
    void test_constructeurCopie();                                  //test du constructeur de recopie
    void test_operatorCopie();                                      //test de l'operateur de recopie

    void test_addition_stat();                                      //test de l'addition avec une stat
    void test_addition_valeur();                                    //test de l'addition avec une valeur
    void test_addition_int();                                       //test de l'addition avec un int

    void test_soustraction_stat();                                  //test de la soustraction avec une stat
    void test_soustraction_valeur();                                //test de la soustraction avec une valeur
    void test_soustraction_int();                                   //test de la soustraction avec un int

    void test_multiplication_stat();                                //test de la multiplication avec une stat
    void test_multiplication_valeur();                              //test de la multiplication avec une valeur
    void test_multiplication_int();                                 //test de la multiplication avec un int

    void test_division_stat();                                      //test de la division avec une stat
    void test_division_valeur();                                    //test de la division avec une valeur
    void test_division_int();                                       //test de la division avec un int

    void test_increase();                                                //test de increaseStat
    void test_decrease();                                                //test de decreaseStat

    void test_egalite_stat();                                           //test egalite avec une stat
    void test_egalite_valeur();                                         //test egalite avec une valeur

    void test_inferieur_stat();                                         //test d'inferieurite avec une stat
    void test_inferieur_valeur();                                       //test d'inferieurite avec une valeur
    void test_inferieur_egal_stat();                                    //test d'inferieurite egalite avec une stat
    void test_inferieur_egal_valeur();                                  //test d'inferieurite egalite avec une valeur

    void test_superieur_stat();                                         //tesst de superieurite avec une stat
    void test_superieur_valeur();                                       //tesst de superieurite avec une valeur
    void test_superieur_egal_stat();                                    //tesst de superieurite egalite avec une stat
    void test_superieur_egal_valeur();                                  //tesst de superieurite egalite avec une valeur
};

#endif // TEST_STATISTIQUE_H
