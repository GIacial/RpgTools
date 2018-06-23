#include "Test/Value/test_intvalue.h"
#include "Test/Value/test_pourcentvalue.h"
#include "Test/Statistique/test_statistique.h"

int main(int argc, char *argv[])
{
    Test_IntValue test_int;
    QTest::qExec(&test_int,argc,argv);
    Test_PourcentValue test_pourcent;
    QTest::qExec(&test_pourcent,argc,argv);

    Test_Statistique test_stat;
    QTest::qExec(&test_stat,argc,argv);

    return 0;
}
