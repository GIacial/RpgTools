#include "test_stat_min_borned_const.h"

#include "../../code/Statistique/statistiqueminbornedconst.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_min_borned_const::Test_stat_min_borned_const() :QObject(){

}


//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_stat_min_borned_const::~Test_stat_min_borned_const() throw (){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Test----------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_1(){
    NumericValue valeur (5);
    NumericValue min (6);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_2(){
    NumericValue valeur (5);
    int minValue (6);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,minValue);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_3(){
    NumericValue valeur (5.0);
    double minValue (6.0);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,minValue);
    stat.increaseStat(NumericValue(0.0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_4(){
    int valeur (5);
    int minValue (6);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_5(){
    int valeur (5);
    int minValue (6);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,minValue);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_6(){
    double valeur (5.0);
    double minValue (6.0);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_constructeur_7(){
    double valeur (5.0);
    double minValue (6.0);
    NumericValue min (minValue);
    StatistiqueMinBornedConst stat ("stat",valeur,minValue);
    stat.increaseStat(NumericValue(0.));
    QVERIFY(stat == min);
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_borneWithDecrease(){
    NumericValue valeur (5);
    NumericValue min (6);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    stat.decreaseStat(NumericValue(0));
    QVERIFY(stat == min);

    NumericValue ajout (-6);
    stat.decreaseStat(ajout);
    QVERIFY(stat == (min - ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_borneWithIncrease(){
    NumericValue valeur (5);
    NumericValue min (6);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    stat.increaseStat(NumericValue(0));
    QVERIFY(stat == min);

    NumericValue ajout (6);
    stat.increaseStat(ajout);
    QVERIFY(stat == (min + ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_stat_min_borned_const::test_borneWithIncrease_exception(){
    NumericValue valeur (5.);
    NumericValue min (6);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
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
void Test_stat_min_borned_const::test_borneWithDecrease_exception(){
    NumericValue valeur (5.);
    NumericValue min (6);
    StatistiqueMinBornedConst stat ("stat",valeur,min);
    bool ok = false;
    try{

        stat.decreaseStat(NumericValue(0.));
    }
    catch (NoPossibleOperationException&){
        ok = true;
    }
    QVERIFY(ok);

}
