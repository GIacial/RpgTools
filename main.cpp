#include "Test/Value/test_intvalue.h"
#include "Test/Value/test_pourcentvalue.h"

int main(int argc, char *argv[])
{
    Test_IntValue test_int;
    QTest::qExec(&test_int,argc,argv);
    Test_PourcentValue test_pourcent;
    QTest::qExec(&test_pourcent,argc,argv);
    return 0;
}
