#include "test_stat_max_borned_ref.h"

#include "../../code/Statistique/statistiquemaxbornedref.h"
//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_max_borned_ref::Test_stat_max_borned_ref() : QObject()
{

}
//------------------------------------------------------------------------------------------------------
//-----------------------------------Destructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_max_borned_ref::~Test_stat_max_borned_ref() throw (){

}
//------------------------------------------------------------------------------------------------------
//--------------------------------------Test------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_ref::test_constructeur_1(){
    NumericValue valeur(7);
    NumericValue max (6);
    StatistiqueMaxBornedRef stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_ref::test_constructeur_2(){
    int valeur(7);
    NumericValue max (6);
    StatistiqueMaxBornedRef stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_ref::test_constructeur_3(){
    double valeur(7.);
    NumericValue max (6.);
    StatistiqueMaxBornedRef stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_ref::test_borneDecrease(){
    NumericValue valeur(7);
    NumericValue max (6);
    StatistiqueMaxBornedRef stat ("stat",valeur,max);
    max -= max;
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_ref::test_borneIncrease(){
    NumericValue valeur(7);
    NumericValue max (6);
    StatistiqueMaxBornedRef stat ("stat",valeur,max);
    max -= max;
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == max);
}


