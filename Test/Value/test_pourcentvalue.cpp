#include "test_pourcentvalue.h"

#include <cmath>

#include "test_intvalue.h"

#include "code/Value/intvalue.h"
#include "code/Value/pourcentvalue.h"
#include "code/Value/numericvalue.h"

//---------------------------------------------------------------------------------------
//-----------------------------------constructeur----------------------------------------
//---------------------------------------------------------------------------------------
Test_PourcentValue::Test_PourcentValue() : QObject()
{

}
//---------------------------------------------------------------------------------------
//------------------------------------destructeur----------------------------------------
//---------------------------------------------------------------------------------------
Test_PourcentValue::~Test_PourcentValue() throw (){

}
//---------------------------------------------------------------------------------------
//-----------------------------------test------------------------------------------------
//---------------------------------------------------------------------------------------
void Test_PourcentValue::constructeur_object(){
    const int valeur = 5;
    const int max = 100;
    const double frequence = 0.25;
    PourcentValue value (valeur,max);
    PourcentValue value2 (frequence);

    QVERIFY(value.getValue() == (double)valeur/max);
    QVERIFY(value2.getValue() == frequence);

}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::constructeur_container(){
    const int valeur = 5;
    const int max = 100;
    const double frequence = 0.25;
    NumericValue value (valeur,max);
    NumericValue value2 (frequence);

    QVERIFY(value == (double)valeur/max);
    QVERIFY(value2 == frequence);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::copie_constructeur(){
    PourcentValue value (0.5);
    PourcentValue copie = value;
    QVERIFY(value == copie);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::clone(){
    NumericValue valeur (0.5);
    NumericValue copie (valeur);
    QVERIFY(valeur == copie);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::affectation_object(){
    IntValue valeur1 (5);
    IntValue valeur2(8);
    valeur2 = valeur1 ;
    QVERIFY(valeur1 == valeur2);
}

//---------------------------------------------------------------------------------------
void Test_PourcentValue::affectation_container(){
    NumericValue valeur1 (0.5);
    NumericValue valeur2(0.8);
    valeur2 = valeur1 ;
    QVERIFY(valeur1 == valeur2);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::addition_avec_IntValue(){
    double frequence = 0.5;
    int int2 = 8;
    NumericValue valeur1 (frequence);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = round((1+frequence) * int2);
    QVERIFY((valeur1 + valeur2) == result);
    QVERIFY((valeur1 += valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::soustraction_avec_IntValue(){
    double frequence = 0.5;
    int int2 = 8;
    NumericValue valeur1 (frequence);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = round((1-frequence) * int2);
    QVERIFY((valeur1 - valeur2) == result);
    QVERIFY((valeur1 -= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::multiplication_avec_IntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent * nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::division_avec_IntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent / nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::inferieur_avecIntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent < nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::inferieurEgal_avecIntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent <= nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::superieur_avecIntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent > nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::superieurEgal_avecIntValue(){
    int int1 = 5;
    double frequence = 0.25;
    NumericValue nombre (int1);
    NumericValue pourcent (frequence);
    bool ok = false;

    try{
        (pourcent >= nombre) ;
    }
    catch(NotSameTypeException& e){
        ok = true;
    }
    QVERIFY(ok);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::addition_avec_PourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);

    double result = frequence1 + frequence;

    QVERIFY((valeur1 + valeur2) == result);
    QVERIFY((valeur1 += valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::soustraction_avec_PourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.75;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);

    double result = frequence1 - frequence;

    QVERIFY((valeur1 - valeur2) == result);
    QVERIFY((valeur1 -= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::multiplication_avec_PourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);

    double result = frequence1 * frequence;

    QVERIFY((valeur1 * valeur2) == result);
    QVERIFY((valeur1 *= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::division_avec_PourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);

    double result = frequence1 / frequence;

    QVERIFY((valeur1 / valeur2) == result);
    QVERIFY((valeur1 /= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::inferieur_avecPourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);


    QVERIFY((valeur1 < valeur2) == (frequence1 < frequence));
    QVERIFY((valeur2 < valeur1) == (frequence < frequence1));
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::inferieurEgal_avecPourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);


    QVERIFY((valeur1 <= valeur2) == (frequence1 <= frequence));
    QVERIFY((valeur2 <= valeur1) == (frequence  <= frequence1));
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::superieur_avecPourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);


    QVERIFY((valeur1 > valeur2) == (frequence1 > frequence));
    QVERIFY((valeur2 > valeur1) == (frequence  > frequence1));
}
//---------------------------------------------------------------------------------------
void Test_PourcentValue::superieurEgal_avecPourcentValue(){
    double frequence1 = 0.5;
    double frequence = 0.25;
    NumericValue valeur1 (frequence1);
    NumericValue valeur2 (frequence);


    QVERIFY((valeur1 >= valeur2) == (frequence1 >= frequence));
    QVERIFY((valeur2 >= valeur1) == (frequence  >= frequence1));
}
