#include "test_stat_min_borned_ref.h"
#include "../../code/Statistique/statistiqueminbornedwithref.h"
//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_min_borned_ref::Test_stat_min_borned_ref() : QObject()
{

}
//------------------------------------------------------------------------------------------------------
//-----------------------------------Destructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_min_borned_ref::~Test_stat_min_borned_ref() throw (){

}
//------------------------------------------------------------------------------------------------------
//--------------------------------------Test------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_ref::test_constructeur_1(){
    NumericValue valeur(5);
    NumericValue min (6);
    StatistiqueMinBornedWithRef stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_ref::test_constructeur_2(){
    int valeur(5);
    NumericValue min (6);
    StatistiqueMinBornedWithRef stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_ref::test_constructeur_3(){
    double valeur(5.);
    NumericValue min (6.);
    StatistiqueMinBornedWithRef stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_ref::test_borneWithDecrease(){
    NumericValue valeur(5);
    NumericValue min (6);
    StatistiqueMinBornedWithRef stat ("stat",valeur,min);
    min += min;
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_ref::test_borneWithIncrease(){
    NumericValue valeur(5);
    NumericValue min (6);
    StatistiqueMinBornedWithRef stat ("stat",valeur,min);
    min += min;
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == min);
}

