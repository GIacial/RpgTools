#ifndef TEST_STAT_MAX_BORNED_CONST_H
#define TEST_STAT_MAX_BORNED_CONST_H

#include <QObject>


#include <QtTest/QtTest>

class Test_stat_max_borned_const : public QObject
{
    Q_OBJECT
public:
    explicit Test_stat_max_borned_const();
    ~Test_stat_max_borned_const() throw ();

signals:

private slots:
    void test_constructeur_1();                         //test d'un constructeur
    void test_constructeur_2();                         //test d'un constructeur
    void test_constructeur_3();                         //test d'un constructeur
    void test_constructeur_4();                         //test d'un constructeur
    void test_constructeur_5();                         //test d'un constructeur
    void test_constructeur_6();                         //test d'un constructeur
    void test_constructeur_7();                         //test d'un constructeur


    void test_borneWithIncrease();                      //test de la borne apres augmentation
    void test_borneWithIncrease_exception();            //test de la borne apres augmentation
    void test_borneWithDecrease();                      //test de la borne apres diminution
    void test_borneWithDecrease_exception();            //test de la borne apres diminution
};

#endif // TEST_STAT_MAX_BORNED_CONST_H
