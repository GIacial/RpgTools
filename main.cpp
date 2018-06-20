#include "Test/Value/test_intvalue.h"

int main(int argc, char *argv[])
{
    Test_IntValue test_int;
    QTest::qExec(&test_int,argc,argv);
    return 0;
}
