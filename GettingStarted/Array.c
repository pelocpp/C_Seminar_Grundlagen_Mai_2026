
// Präprozessor: Reine Textersetzung

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MaxZahlen  6   // Kommentar

#define MaxZahlenUebung  10 

// globales Feld
int g_einFeld[MaxZahlenUebung];

void exercise_Array_Ausgeben()
{
    for (int i = 0; i < MaxZahlenUebung; i++) {
        printf("%d: %d\n", i, g_einFeld[i]);
    }
}

void exercise_Array_Vorbelegen()
{
    // srand(123);

    // Trick für ECHTE Zufallszahlen
    srand(time(NULL));

    // Mit Zufallszahlen:  rand
    //int zufall = rand();
    //printf("Zufall: %d\n", zufall);

    //zufall = rand();
    //printf("Zufall: %d\n", zufall);

    for (int i = 0; i < MaxZahlenUebung; i++) {
        g_einFeld[i] = rand() % 100 + 1;
    }
}

// To be done
int exercise_Array_Minimum()
{
    // Minimum von g_einFeld
    return -1;
}

// To be done
int exercise_Array_Maximum()
{
    // Minimum von g_einFeld
    return -1;
}

void exercise_Array()
{
    exercise_Array_Ausgeben();
    exercise_Array_Vorbelegen();
    exercise_Array_Ausgeben();
}

void demoArray()
{
    // Lotto
    // int  lottoZahlen1[6] = {};  // scheint in älteren Versionen nicht zu gehen

    // Vereinbaren eines Felds

    // das geht nicht !!!!!!!!!!!!!!!!!!
    //int n = 123;
    //int  andereZahlen[n];

    int  lottoZahlen1[MaxZahlen] = { 0 };  // scheint in älteren Versionen nicht zu gehen

    int  lottoZahlen2[MaxZahlen] = { 1, 2, 3};

    int  lottoZahlen3[MaxZahlen] = { 1, 2, 3, 4, 5, 6};

    int  lottoZahlen4[] = { 1, 2, 3, 4, 5, 6 };

    // -------------------------------------------
    // Zugriff: Mit einem Index
    // Geht lesend und schreibend

    int ersteLottoZahl = lottoZahlen4[0];

    int letzteLottoZahl = lottoZahlen4[5];

    lottoZahlen4[0] = 49;

    // Robuste, stabile SW
   // int index = 0;

    //printf("Index eingeben ");
    //scanf_s("%d", &index);

    //letzteLottoZahl = lottoZahlen4[index];
    //printf("letzteLottoZahl: %d\n", letzteLottoZahl);

    // -------------------------------------------
    // Ein Feld durchlaufen // traversieren

    for (int i = 0; i < MaxZahlen; i++)
    {
        printf("%d: %d\n", (i+1), lottoZahlen4[i]);
    }
}
