

#include <stdio.h>   // printf
#include <stdlib.h>  // rand, srand, 

int g_einInt = 0;


static void testDynamic_01()
{
    // Feld dynamischer Länge
    int n = 10;   // könnte man auch mit scanf_s einlesen

    // int BigData[100000000];   // Noooooooooooooo

    //int* feld = NULL;
    //int* feld = (int*) 0x1234;

    int* feld = (int*) malloc(n * sizeof(int));    // Speicherbereich für 10 int-Werte angelegt
                                                   // Anfangsadresse: Der Speicher ist konsekutiv
                                                   // Wie kann ich auf diesen Bereich "komplett" zugreifen
    
    // wir simulieren "kein Speicher verfügbar"  // out of memory
    // feld = NULL;
                                                   
                                                   // In Product SW:
    //if (feld == NULL) {
    //    //printf("Malloc war nicht erfolgreich");
    //    return;  // silent exit
    //}

    for (int i = 0; i < n; i++)
    {
        *(feld + i) = 100 + i;
    }

    // oder - Dennis Ritchie war gnädig mit uns
    for (int i = 0; i < n; i++)
    {
        *(feld + i) = 100 + i;
        // identisch
        feld [i] = 100 + i;
        printf("Wert an %d: %d\n", i, feld[i]);
    }

  //  free(feld);
}


void demoDynamic()
{
    testDynamic_01();
}