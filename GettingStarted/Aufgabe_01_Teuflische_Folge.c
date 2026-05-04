// =====================================================================================
// TeuflischeFolge.c
// =====================================================================================

#include <stdio.h>

void exercise_teuflische_folge()
{
    int number;
    int n = 1;

    printf("Teuflische Zahlenfolge\n");
    printf("======================\n");

    // Feste Zahl im Quellcode
    // number = 27;  // start number
    
    // Einlesen von der Konsole
    scanf_s("%d", & number);  // ACHTUNG: & bedeutet ADRESSE


    n = 1;       // counter for length of sequence

    printf("Start: %d\n\n", number);

    while (number != 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = 3 * number + 1;
        }

        printf("%3d: Zahl = %d\n", n, number);
        n++;
    }
}

// =====================================================================================
// End-of-File
// =====================================================================================
