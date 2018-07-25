#include "test_randomgenerator.h"

#include "../../code/Random/randomgenerator.h"
#include <iostream>



//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_RandomGenerator::Test_RandomGenerator() :QObject(){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_RandomGenerator::~Test_RandomGenerator() throw (){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Test----------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_notSameSize(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    items.push_back(new int(2));
    chance.push_back(RandomGenerator<int>::CENT_POURCENT);
    chance.push_back(0);

    bool ok = false;

    try{

        RandomGenerator<int> g(items,chance);
    }
    catch (NotSameSizeException& ){
        ok = true;
    }

    QVERIFY (ok);

}
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_not100Pourcent(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    chance.push_back(0.5*RandomGenerator<int>::CENT_POURCENT);
    chance.push_back(0.2*RandomGenerator<int>::CENT_POURCENT);

    bool ok = false;

    try{

        RandomGenerator<int> g(items,chance);
    }
    catch (Not100PourcentTotalException& ){
        ok = true;
    }

    QVERIFY (ok);
}
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_OneItem(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    chance.push_back(RandomGenerator<int>::CENT_POURCENT);

    RandomGenerator<int> g(items,chance);
    int nbTirage = RandomGenerator<int>::CENT_POURCENT;

    std::vector<int> proba = {0};
    for(int i = 0 ; i< nbTirage ; i++){
        int r = g.getRandom();
        QVERIFY( *(items[0]) == r);
        proba[r] ++;
    }
    for(unsigned int i = 0; i <proba.size() ; i++){
         QVERIFY(proba[i] == chance[i]);
    }
}
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_Item0Pourcent(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    items.push_back(new int(2));
    chance.push_back(RandomGenerator<int>::CENT_POURCENT);
    chance.push_back(0);
    chance.push_back(0);

    RandomGenerator<int> g(items,chance);
    int nbTirage = RandomGenerator<int>::CENT_POURCENT;

    std::vector<int> proba = {0,0,0};
    for(int i = 0 ; i< nbTirage ; i++){
        int r = g.getRandom();
        proba[r] ++;
    }
    for(unsigned int i = 0; i <proba.size() ; i++){
          QVERIFY(proba[i] == chance[i]);
    }
}
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_equiprobable(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    chance.push_back(50000);
    chance.push_back(50000);

    RandomGenerator<int> g(items,chance);
    int nbTirage = RandomGenerator<int>::CENT_POURCENT;

    std::vector<int> proba = {0,0};
    for(int i = 0 ; i< nbTirage ; i++){
        int r = g.getRandom();
        proba[r] ++;
    }
    for(unsigned int i = 0; i <proba.size() ; i++){

        std::cerr <<"EQUI : " << proba[i] << "!=" << chance[i] << std::endl;
          QVERIFY(proba[i] <= chance[i]*1.05 && proba[i] >= chance[i]*0.95);
    }
}
//------------------------------------------------------------------------------------------------------
void Test_RandomGenerator::test_noEquiprobable(){
    std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    items.push_back(new int(2));
    chance.push_back(50000);
    chance.push_back(10000);
    chance.push_back(40000);

    RandomGenerator<int> g(items,chance);
    const int multiplicateur = 1 ;
    int nbTirage = multiplicateur * RandomGenerator<int>::CENT_POURCENT;

    std::vector<int> proba = {0,0,0};
    for(int i = 0 ; i< nbTirage ; i++){
        int r = g.getRandom();
        proba[r] ++;
    }
    for(unsigned int i = 0; i <proba.size() ; i++){
        proba[i] /= multiplicateur;
        std::cerr <<"N_EQUI : " << proba[i] << "!=" << chance[i] << std::endl;
        QVERIFY(proba[i] <= chance[i]*1.05 && proba[i] >= chance[i]*0.95);
    }
}
