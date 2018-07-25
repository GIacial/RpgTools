#ifndef TEST_RANDOMCELL_H
#define TEST_RANDOMCELL_H

#include <QObject>

#include <QtTest/QtTest>

class Test_RandomCell : public QObject
{
    Q_OBJECT
public:
    explicit Test_RandomCell();
    ~Test_RandomCell() throw ();

signals:

private slots:
    void test_constructeur();                                  //test du constrcuteur
    void test_getTurn();                                        //test de la prediction du turn de retour
    void test_getPourcentageReel();                             //test du pourcentage reel
};

#endif // TEST_RANDOMCELL_H
