#ifndef TEST_STAT_MIN_BORNED_REF_H
#define TEST_STAT_MIN_BORNED_REF_H

#include <QObject>
#include <QtTest/QtTest>

class Test_stat_min_borned_ref : public QObject
{
    Q_OBJECT
public:
    explicit Test_stat_min_borned_ref();
    ~Test_stat_min_borned_ref() throw ();

signals:

private slots:
    void test_constructeur_1();                         //test d'un constructeur
    void test_constructeur_2();                         //test d'un constructeur
    void test_constructeur_3();                         //test d'un constructeur


    void test_borneWithIncrease();                      //test de la borne apres augmentation et changement de la borne
    void test_borneWithDecrease();                      //test de la borne apres diminution et chnagement de la borne*/
};

#endif // TEST_STAT_MIN_BORNED_REF_H
