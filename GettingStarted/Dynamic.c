

#include <stdio.h>   // printf
#include <stdlib.h>  // rand, srand, 


static void testDynamic_01()
{
    // Feld dynamischer Länge
    int n = 10;   // könnte man auch mit scanf_s einlesen

    int* feld = malloc(n * sizeof(int));     // Speicherbereich für 10 int-Werte angelegt
                                             // Anfangsadresse: Der Speicher ist konsekutiv

    // Wie kann ich auf diesen Bereich "komplett" zugreifen
    for (int i = 0; i < n; i++)
    {
        * (feld + i) = 100 + i;
    }

    // oder - Dennis Ritchie war gnädig mit uns
    for (int i = 0; i < n; i++)
    {
        *(feld + i) = 100 + i;
        // identisch
        feld [i] = 100 + i;
    }
}


void demoDynamic()
{
    testDynamic_01();
}