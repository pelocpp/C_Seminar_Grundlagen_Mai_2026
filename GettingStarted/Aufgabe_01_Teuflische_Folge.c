// =====================================================================================
// TeuflischeFolge.c
// =====================================================================================

#include <stdio.h>    // alles was mit # (in der ersten Spalte): Präprozessor

// void main()
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

    while (number != 1)   // true / false (( wahr / falsch
    {
        if (number % 2 == 0)   // rest = 0, dann gerade
        {
            number = number / 2;   // Zuweisungen
        }
        else     // rest = 1, dann ungerade
        {
            number = 3 * number + 1;
        }

        printf("%-3d: Zahl = %d\n", n, number);
        n++;   // inkrement - Abkürzung:   n = n + 1
    }
}

// =====================================================================================
// End-of-File
// =====================================================================================
