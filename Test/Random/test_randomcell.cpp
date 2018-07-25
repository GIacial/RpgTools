#include "test_randomcell.h"

#include "../../code/Random/randomcell.h"

//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_RandomCell::Test_RandomCell() :QObject(){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_RandomCell::~Test_RandomCell() throw (){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Test----------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_RandomCell::test_constructeur(){
    const int item = 25;
    const int pourcentage = 25000;
    RandomCell<int> cell (new int(item),pourcentage);

    QVERIFY(item == cell.getItem());
    QVERIFY(pourcentage == cell.getPourcentageTheorique());

}
//------------------------------------------------------------------------------------------------------
void Test_RandomCell::test_getTurn(){
    const int item = 25;
    const int pourcentage = 25000;
    const int turn = 4;
    RandomCell<int> cell (new int(item),pourcentage);

    cell.getItem();

    QVERIFY(turn == cell.getTurn());
}
//------------------------------------------------------------------------------------------------------
void Test_RandomCell::test_getPourcentageReel(){
    const int item = 25;
    const int pourcentage = 25000;
    const int turn = 2;
    const int pourcentageReel = 50000;
    RandomCell<int> cell (new int(item),pourcentage);

    cell.getItem();

    QVERIFY(pourcentageReel == cell.getPourcentageReel(turn));
}
