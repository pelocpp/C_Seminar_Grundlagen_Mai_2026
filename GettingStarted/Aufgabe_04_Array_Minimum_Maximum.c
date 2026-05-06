
// Präprozessor: Reine Textersetzung

// Modul:


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MaxZahlenUebung  10

// globales Feld (nur in dieser Datei)
static int g_einFeld[MaxZahlenUebung];

static void exercise_Array_Ausgeben()
{
    for (int i = 0; i < MaxZahlenUebung; i++) {
        printf("%d: %d\n", i, g_einFeld[i]);
    }
}

static void exercise_Array_Vorbelegen()
{
    // srand(123);

    // Trick für ECHTE Zufallszahlen
    srand((unsigned int)time(NULL));   // NUR EINMAL aufrufen // Seed

    // Mit Zufallszahlen:  rand
    //int zufall = rand();
    //printf("Zufall: %d\n", zufall);

    //zufall = rand();
    //printf("Zufall: %d\n", zufall);

    for (int i = 0; i < MaxZahlenUebung; i++) {
        g_einFeld[i] = rand() % 100 + 1;
    }
}

static int exercise_Array_Minimum()
{
    // Kleinstes Element suchen   [ 2, 3, 4, 5, 6, 99 ]
    // int minimum = 100;           // 2
    int minimum = g_einFeld[0];

    for (int i = 1; i < MaxZahlenUebung; i++)
    {
        if (g_einFeld[i] < minimum) {
            minimum = g_einFeld[i];
        }
    }

    return minimum;
}

static int exercise_Array_Maximum()
{
    // Groesstes Element suchen
    int maximum = g_einFeld[0];

    for (int i = 1; i < MaxZahlenUebung; i++)
    {
        if (g_einFeld[i] > maximum) {
            maximum = g_einFeld[i];
        }
    }

    return maximum;
}

// Dies ist in diesem "Modul Übung zu Arrays" die einzige Funktion,
// die exportiert wird.

void exercise_Array()
{
    // exercise_Array_Ausgeben();
    exercise_Array_Vorbelegen();
    exercise_Array_Ausgeben();

    int mini = exercise_Array_Minimum();
    printf("Minimum: %d\n", mini);

    int maxi = exercise_Array_Maximum();
    printf("Minimum: %d\n", maxi);
}
