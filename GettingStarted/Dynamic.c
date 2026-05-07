

#include <stdio.h>   // printf
#include <stdlib.h>  // rand, srand, 

static int g_einInt = 0;    //  globale Variable, aber nur in DIESER DATEI

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

    free(feld);
}

// Externe Routine // ext.  Bibliothek
static int* testDynamic_02_Extern(  int* length  )
{
    int* feld = (int*) malloc(10  * sizeof(int));

    feld[0] = 123;

    *length = 10;

    return feld;  
}

static void testDynamic_03_client()
{
    int len = 0;
    int* adr = testDynamic_02_Extern(& len);

    size_t versuch = sizeof(adr);

    // mit den Daten gearbeitet
    int zweiterVersuch;
    zweiterVersuch = *adr;
    zweiterVersuch = adr[0];

    // jetzt benötige ich sie nicht mehr
    free(adr);    // !!!!!!!!!!!!!
}

// Grammatik: Richtig oder falsch
static int* testDynamic_03_Extern_WRONG()
{
    int einWert = 123;
    return &einWert;     // ERROR C4172: returning address of local variable or temporary : einWert
}

static void testDynamic_03_client_WRONG()
{
    int* adr = testDynamic_03_Extern_WRONG();

    printf("Dummy");  // ignorieren ...

    int zweiterVersuch;
    zweiterVersuch = *adr;
    zweiterVersuch = adr[0];
}

static void testDynamic_99_gimmicks()
{
    int* feld = (int*) malloc(100);  // 100 Bytes, 100 sollte durch 4 teilbar sein:  25 int's
    if (feld == NULL) {
        return;
    }

    feld[0] = 123;

    int unknown1 = feld[-1];
    int unknown2 = feld[-2];
    int unknown3 = feld[-3];
    int unknown4 = feld[-4];   //  undocumented  // Hersteller-abhängig

    free(feld);
}

void demoDynamic()
{
    testDynamic_99_gimmicks();
}
