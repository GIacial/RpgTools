#include "Test/Value/test_intvalue.h"
#include "Test/Value/test_pourcentvalue.h"
#include "Test/Statistique/test_statistique.h"
#include "Test/Statistique/test_stat_min_borned_const.h"
#include "Test/Statistique/test_stat_min_borned_ref.h"

int main(int argc, char *argv[])
{
    //test de valeur
    Test_IntValue               test_int;               QTest::qExec(&test_int,argc,argv);
    Test_PourcentValue          test_pourcent;          QTest::qExec(&test_pourcent,argc,argv);

    //test des stat
    Test_Statistique            test_stat;              QTest::qExec(&test_stat,argc,argv);
    Test_stat_min_borned_const  test_minBorneConst;     QTest::qExec(&test_minBorneConst,argc,argv);
    Test_stat_min_borned_ref    test_minBorneRef;       QTest::qExec(&test_minBorneRef,argc,argv);


    return 0;
}
