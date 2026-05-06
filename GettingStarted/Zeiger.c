
// Modul: Zeiger

#include <stdio.h>

static void malDrei(int value)   // Kopie
{
    value = 3 * value;
}

static void malDreiEx(int* adrValue)  // Da steht ein Original dahinter
{
    // Wert hinter der Adresse 'adrValue'
    int tmp = *adrValue;

    tmp = 3 * tmp;

    *adrValue = tmp;
}

static void malDreiExEx(int* adrValue)
{
    *adrValue = *adrValue * 3;

    // oder

    *adrValue = 3 * *adrValue;   // korrekt !!!

    // oder auch 

    //    Erster *:   Multiplikation
    //    Zweiter *:  Wert-von  // indirekter Zugriff

    *adrValue = 3 **adrValue;   // auch korrekt !!! Crazy !!! Nicht so schreiben ...
}

// Vergleich
void test_zeiger()
{
    int n = 123;

    int* ptr = &n;

    n = 124;     // direkte Wertzuweisung über den Namen der Variablen

    // versus

    *ptr = 124;  // indirekte Wertzuweisung über die Adresse der Variablen
}

// zweite Demo einer Zeiger Variablen
static void test_zeiger_02()
{
    int wert = 10;
    printf("wert: %d\n", wert);  // 10
    malDrei(wert); // hier wird eine Kopie verändert, NICHT 'wert'
    printf("wert: %d\n", wert);  // 10

    malDreiEx(& wert);    // hier wird die Adresse von 'wert' übergeben
    printf("wert: %d\n", wert);  // 30

    malDreiExEx(&wert);
    printf("wert: %d\n", wert);  // 10 oder 30
}

// erste Demo einer Zeiger Variablen
static void test_zeiger_01()
{
    int n = 123;   // 123
    int m = 124;

    // Welche Adresse hat n ??? 1024
    int* an = &n;   // 0xCF32434
                    // &:  Adresse-von // referenzieren
                    // Dieser * gehört zum TYP: int*
                    // Dieser * ist KEINE Anweisung, kein Operator


    printf("n=%d\n", n);
    printf("an=%p\n", an);

    // Weise der Variablen n den Wert 124 zu, ohne den Variablennamen 'n' zu verwenden
    *an = 124;     // *: Wert indirekt schreiben
                   // Dieser * ist ein Operator
                   // Schreibe indirekt  // dereferenzieren

  //  printf("n=%d\n", n);
}


void tausche(/*...*/)
{
}

void exercise()
{
    int n = 5;
    int m = 10;

    printf("%d - %d\n", n, m); // 5, 10

    tausche(n, m);  // oder so ähnlich

    printf("%d - %d\n", n, m); // 10, 5 !!!!!!!!!!!!!!!!!!!!!!!
}