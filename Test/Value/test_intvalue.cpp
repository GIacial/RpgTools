#include "test_intvalue.h"

#include "code/Value/intvalue.h"
#include "code/Value/numericvalue.h"

//---------------------------------------------------------------------------------------
//-----------------------------------constructeur----------------------------------------
//---------------------------------------------------------------------------------------
Test_IntValue::Test_IntValue() : QObject()
{

}
//---------------------------------------------------------------------------------------
//------------------------------------destructeur----------------------------------------
//---------------------------------------------------------------------------------------
Test_IntValue::~Test_IntValue() throw (){

}
//---------------------------------------------------------------------------------------
//-----------------------------------test------------------------------------------------
//---------------------------------------------------------------------------------------
void Test_IntValue::constructeur_object(){
    const int valeur = 5;
    IntValue* value = new IntValue(valeur);

    QVERIFY(value != NULL);
    QVERIFY(value->getValue() == 5);

    delete value;
}
//---------------------------------------------------------------------------------------
void Test_IntValue::constructeur_container(){
    const int valeur = 5;
    NumericValue value (valeur);

    QVERIFY(value == valeur);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::copie_constructeur(){
    IntValue value (5);
    IntValue copie = value;
    QVERIFY(value == copie);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::clone(){
    NumericValue valeur (5);
    NumericValue copie (valeur);
    QVERIFY(valeur == copie);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::affectation_object(){
    IntValue valeur1 (5);
    IntValue valeur2(8);
    valeur2 = valeur1 ;
    QVERIFY(valeur1 == valeur2);
}

//---------------------------------------------------------------------------------------
void Test_IntValue::affectation_container(){
    NumericValue valeur1 (5);
    NumericValue valeur2(8);
    valeur2 = valeur1 ;
    QVERIFY(valeur1 == valeur2);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::addition_avec_IntValue(){
    int int1 = 5;
    int int2 = 8;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = int1 + int2;
    QVERIFY((valeur1 + valeur2) == result);
    QVERIFY((valeur1 += valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::soustraction_avec_IntValue(){
    int int1 = 5;
    int int2 = 8;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = int1 - int2;
    QVERIFY((valeur1 - valeur2) == result);
    QVERIFY((valeur1 -= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::multiplication_avec_IntValue(){
    int int1 = 5;
    int int2 = 8;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = int1 * int2;
    QVERIFY((valeur1 * valeur2) == result);
    QVERIFY((valeur1 *= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::division_avec_IntValue(){
    int int1 = 5;
    int int2 = 8;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    QVERIFY(valeur1 != valeur2);
    int result = int1 * int2;
    QVERIFY((valeur1 * valeur2) == result);
    QVERIFY((valeur1 *= valeur2) == result);
    QVERIFY(valeur1 == result);
    QVERIFY(valeur2 != result);
}
//---------------------------------------------------------------------------------------
void Test_IntValue::inferieur_avecIntValue(){
    int int1 = 5;
    int int2 = 8;
    int int3 = int1;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    NumericValue valeur3(int3);

    QVERIFY((valeur1 < valeur2) == (int1 < int2));
    QVERIFY((valeur1 < valeur3) == (int1 < int3));
    QVERIFY((valeur2 < valeur1) == (int2 < int1));
}
//---------------------------------------------------------------------------------------
void Test_IntValue::inferieurEgal_avecIntValue(){
    int int1 = 5;
    int int2 = 8;
    int int3 = int1;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    NumericValue valeur3(int3);

    QVERIFY((valeur1 <= valeur2) == (int1 <= int2));
    QVERIFY((valeur1 <= valeur3) == (int1 <= int3));
    QVERIFY((valeur2 <= valeur1) == (int2 <= int1));
}
//---------------------------------------------------------------------------------------
void Test_IntValue::superieur_avecIntValue(){
    int int1 = 5;
    int int2 = 8;
    int int3 = int1;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    NumericValue valeur3(int3);

    QVERIFY((valeur1 > valeur2) == (int1 > int2));
    QVERIFY((valeur1 > valeur3) == (int1 > int3));
    QVERIFY((valeur2 > valeur1) == (int2 > int1));
}
//---------------------------------------------------------------------------------------
void Test_IntValue::superieurEgal_avecIntValue(){
    int int1 = 5;
    int int2 = 8;
    int int3 = int1;
    NumericValue valeur1 (int1);
    NumericValue valeur2(int2);
    NumericValue valeur3(int3);

    QVERIFY((valeur1 >= valeur2) == (int1 >= int2));
    QVERIFY((valeur1 >= valeur3) == (int1 >= int3));
    QVERIFY((valeur2 >= valeur1) == (int2 >= int1));
}
