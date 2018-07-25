#include "Test/Value/test_intvalue.h"
#include "Test/Value/test_pourcentvalue.h"

#include "Test/Statistique/test_statistique.h"
#include "Test/Statistique/test_stat_min_borned_const.h"
#include "Test/Statistique/test_stat_min_borned_ref.h"
#include "Test/Statistique/test_stat_max_borned_const.h"
#include "Test/Statistique/test_stat_max_borned_ref.h"

#include "Test/Random/test_randomcell.h"
#include "Test/Random/test_randomgenerator.h"

#include "code/Random/randomgenerator.h"


#include <iostream>
int main(int argc, char *argv[])
{
   //test de valeur
    Test_IntValue               test_int;               QTest::qExec(&test_int,argc,argv);
    Test_PourcentValue          test_pourcent;          QTest::qExec(&test_pourcent,argc,argv);

    //test des stat
    Test_Statistique            test_stat;              QTest::qExec(&test_stat,argc,argv);
    Test_stat_min_borned_const  test_minBorneConst;     QTest::qExec(&test_minBorneConst,argc,argv);
    Test_stat_min_borned_ref    test_minBorneRef;       QTest::qExec(&test_minBorneRef,argc,argv);
    Test_stat_max_borned_const  test_maxBorneConst;     QTest::qExec(&test_maxBorneConst,argc,argv);
    Test_stat_max_borned_ref    test_maxBorneRef;       QTest::qExec(&test_maxBorneRef,argc,argv);

    //test des random
    Test_RandomCell             test_RandomCell;        QTest::qExec(&test_RandomCell,argc,argv);
    Test_RandomGenerator        test_RandomGenerator;   QTest::qExec(&test_RandomGenerator,argc,argv);


  /*  std::vector< int*> items;
    std::vector< int> chance;

    items.push_back(new int(0));
    items.push_back(new int(1));
    items.push_back(new int(2));
    chance.push_back(50000);
    chance.push_back(10000);
    chance.push_back(40000);

    RandomGenerator<int> g(items,chance);
    const  double multiplicateur = 1.5;
    unsigned long nbTirage = multiplicateur * RandomGenerator<int>::CENT_POURCENT;

    std::vector<unsigned long> proba = {0,0,0};
    for(unsigned long i = 0 ; i< nbTirage ; i++){
        int r = g.getRandom();
        proba[r] ++;
    }
    for(unsigned int i = 0; i <proba.size() ; i++){
        proba[i] /= multiplicateur;
        std::cerr <<"N_EQUI : " << proba[i] << "!=" << chance[i] << std::endl;
    }*/

    return 0;
}
