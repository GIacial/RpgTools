#ifndef TEST_RANDOMGENERATOR_H
#define TEST_RANDOMGENERATOR_H

#include <QObject>

#include <QtTest/QtTest>

class Test_RandomGenerator : public QObject
{
    Q_OBJECT
public:
    explicit Test_RandomGenerator();
    ~Test_RandomGenerator() throw ();

signals:

private slots:
    void test_not100Pourcent();
    void test_notSameSize();
    void test_equiprobable();
    void test_OneItem();
    void test_Item0Pourcent();
    void test_noEquiprobable();
};

#endif // TEST_RANDOMGENERATOR_H
