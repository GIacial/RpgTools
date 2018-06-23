#include "test_statistique.h"

#include "../../code/Statistique/statistique.h"

using namespace std ;
//------------------------------------------------------------------------------------------------------
//----------------------------------Constructeur--------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_Statistique::Test_Statistique(){

}
//------------------------------------------------------------------------------------------------------
//----------------------------------Destructeur---------------------------------------------------------
//------------------------------------------------------------------------------------------------------
Test_Statistique::~Test_Statistique(){

}
//------------------------------------------------------------------------------------------------------
//------------------------------------Test--------------------------------------------------------------
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_constructeur(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    QVERIFY(stat.getName() == nom);
    QVERIFY(stat.getValue() == valeur);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_constructeurCopie(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique ori (nom,valeur);
    Statistique stat (ori);

    QVERIFY(stat.getName() == nom);
    QVERIFY(stat.getValue() == valeur);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_operatorCopie(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique ori (nom,valeur);
    Statistique stat ("stat2",78);
    stat = ori;

    QVERIFY(stat.getName() == nom);
    QVERIFY(stat.getValue() == valeur);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_addition_stat(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);
    string nom2("tats");
    Statistique stat2(nom2,valeur2);

    QVERIFY((stat + stat2) == (valeur + valeur2));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_addition_valeur(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);

    QVERIFY((stat + valeur2) == (valeur + valeur2));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_addition_int(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const int valeur2 (7);

    QVERIFY((stat + valeur2) == (valeur + NumericValue(valeur2)));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_soustraction_stat(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);
    string nom2("tats");
    Statistique stat2(nom2,valeur2);

    QVERIFY((stat - stat2) == (valeur - valeur2));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_soustraction_valeur(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);

    QVERIFY((stat - valeur2) == (valeur - valeur2));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_soustraction_int(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const int valeur2 (7);

    QVERIFY((stat - valeur2) == (valeur - NumericValue(valeur2)));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_multiplication_stat(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);
    string nom2("tats");
    Statistique stat2(nom2,valeur2);

    QVERIFY((stat * stat2) == (valeur * valeur2));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent * stat2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_multiplication_valeur(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);

    QVERIFY((stat * valeur2) == (valeur * valeur2));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent * valeur2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_multiplication_int(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const int valeur2 (7);

    QVERIFY((stat * valeur2) == (valeur * NumericValue(valeur2)));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent * valeur2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}

//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_division_stat(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);
    string nom2("tats");
    Statistique stat2(nom2,valeur2);

    QVERIFY((stat / stat2) == (valeur / valeur2));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent / stat2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_division_valeur(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const NumericValue valeur2 (7);

    QVERIFY((stat / valeur2) == (valeur / valeur2));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent / valeur2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_division_int(){
    const NumericValue valeur (5);
    string nom ("stat");
    Statistique stat (nom,valeur);

    const int valeur2 (7);

    QVERIFY((stat / valeur2) == (valeur / NumericValue(valeur2)));

    const NumericValue pourcent (0.25);
    string nomPourcent ("statPourcent");
    Statistique statPourcent (nomPourcent,pourcent);

    bool ok = false;
    try{
        (statPourcent / valeur2);
    }
    catch(NoPossibleOperationException& ){
        ok = true;
    }

    QVERIFY(ok);
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_increase(){
    const NumericValue valeur (5);
    const NumericValue ajout (7);
    string nom ("stat");
    Statistique stat (nom,valeur);

    stat.increaseStat(ajout);

    QVERIFY(stat == (valeur + ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_decrease(){
    const NumericValue valeur (5);
    const NumericValue ajout (7);
    string nom ("stat");
    Statistique stat (nom,valeur);

    stat.decreaseStat(ajout);

    QVERIFY(stat == (valeur - ajout));
}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_egalite_stat(){

    Statistique stat ("1",5);
    Statistique statCopie (stat);
    Statistique stat2 ("2",5);
    Statistique stat3 ("1",7);

    QVERIFY(!(stat == stat2));
    QVERIFY(stat == stat);
    QVERIFY(stat == statCopie);
    QVERIFY(!(stat == stat3));

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_egalite_valeur(){
    NumericValue valeurStat(5);
    Statistique stat ("1",valeurStat);
    NumericValue valeurInf(1);
    NumericValue valeurSup(7);


    QVERIFY(!(stat == valeurInf));
    QVERIFY(stat == valeurStat);
    QVERIFY(!(stat == valeurSup));

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_inferieur_stat(){

    Statistique stat ("1",5);
    Statistique statInf ("2",3);
    Statistique statSup ("1",7);

    QVERIFY(!(stat < statInf));
    QVERIFY(!(stat < stat));
    QVERIFY(stat < statSup);

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_inferieur_valeur(){
    NumericValue valeurStat(5);
    Statistique stat ("1",valeurStat);
    NumericValue valeurInf(1);
    NumericValue valeurSup(7);


    QVERIFY(!(stat < valeurInf));
    QVERIFY(stat < valeurSup);
    QVERIFY(!(stat < valeurStat));

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_inferieur_egal_stat(){

    Statistique stat ("1",5);
    Statistique statInf ("2",3);
    Statistique statSup ("1",7);

    QVERIFY(!(stat <= statInf));
    QVERIFY((stat <= stat));
    QVERIFY(stat <= statSup);

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_inferieur_egal_valeur(){
    NumericValue valeurStat(5);
    Statistique stat ("1",valeurStat);
    NumericValue valeurInf(1);
    NumericValue valeurSup(7);


    QVERIFY(!(stat <= valeurInf));
    QVERIFY(stat <= valeurSup);
    QVERIFY((stat <= valeurStat));

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_superieur_stat(){

    Statistique stat ("1",5);
    Statistique statInf ("2",3);
    Statistique statSup ("1",7);

    QVERIFY(!(stat > statSup));
    QVERIFY(!(stat > stat));
    QVERIFY(stat > statInf);

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_superieur_valeur(){
    NumericValue valeurStat(5);
    Statistique stat ("1",valeurStat);
    NumericValue valeurInf(1);
    NumericValue valeurSup(7);


    QVERIFY(!(stat > valeurSup));
    QVERIFY(stat > valeurInf);
    QVERIFY(!(stat > valeurStat));

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_superieur_egal_stat(){

    Statistique stat ("1",5);
    Statistique statInf ("2",3);
    Statistique statSup ("1",7);

    QVERIFY(!(stat >= statSup));
    QVERIFY((stat >= stat));
    QVERIFY(stat >= statInf);

}
//------------------------------------------------------------------------------------------------------
void Test_Statistique::test_superieur_egal_valeur(){
    NumericValue valeurStat(5);
    Statistique stat ("1",valeurStat);
    NumericValue valeurInf(1);
    NumericValue valeurSup(7);


    QVERIFY(!(stat >= valeurSup));
    QVERIFY(stat >= valeurInf);
    QVERIFY((stat >= valeurStat));

}







