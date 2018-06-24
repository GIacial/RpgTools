#include "test_stat_max_borned_const.h"

#include "../../code/Statistique/StatistiqueMaxBornedConst.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_max_borned_const::Test_stat_max_borned_const() :QObject(){

}


//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_max_borned_const::~Test_stat_max_borned_const() throw (){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Test----------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_1(){
    NumericValue valeur (7);
    NumericValue max (6);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_2(){
    NumericValue valeur (7);
    int maxValue (6);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,maxValue);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_3(){
    NumericValue valeur (7.0);
    double maxValue (6.0);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,maxValue);
    stat.increaseStat(NumericValue(0.0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_4(){
    int valeur (7);
    int maxValue (6);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_5(){
    int valeur (7);
    int maxValue (6);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,maxValue);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_6(){
    double valeur (7.0);
    double maxValue (6.0);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_constructeur_7(){
    double valeur (7.0);
    double maxValue (6.0);
    NumericValue max (maxValue);
    StatistiqueMaxBornedConst stat ("stat",valeur,maxValue);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == max);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_borneWithDecrease(){
    NumericValue valeur (7);
    NumericValue max (6);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == max);

    NumericValue ajout (6);
    stat.decreaseStat(ajout);
    QVERIFY(stat == (max - ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_borneWithIncrease(){
    NumericValue valeur (7);
    NumericValue max (6);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == max);

    NumericValue ajout (-6);
    stat.increaseStat(ajout);
    QVERIFY(stat == (max + ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_borneWithIncrease_exception(){
    NumericValue valeur (7.);
    NumericValue max (6);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    bool ok = false;
    try{

        stat.increaseStat(NumericValue(0.));
    }
    catch (NoPossibleOperationException&){
        ok = true;
    }
    QVERIFY(ok);

}
//------------------------------------------------------------------------------------------------------
void Test_stat_max_borned_const::test_borneWithDecrease_exception(){
    NumericValue valeur (7.);
    NumericValue max (6);
    StatistiqueMaxBornedConst stat ("stat",valeur,max);
    bool ok = false;
    try{

        stat.decreaseStat(NumericValue(0.));
    }
    catch (NoPossibleOperationException&){
        ok = true;
    }
    QVERIFY(ok);

}
