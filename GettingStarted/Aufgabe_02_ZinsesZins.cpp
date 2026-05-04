// =====================================================================================
// Zinsberechnung.c
// =====================================================================================

#include <stdio.h>

void main()
// void exercise_zinsberechnung()
{
    double capitalStock = 1000;
    double startCapitalStock = capitalStock;
    double interestRate = 4.0;
    int    numberYears = 10;

    printf("Zinstabelle fuer Grundkapital %.2f\n", capitalStock);
    printf("Verzinsung:                   %.2f\n", interestRate);
    printf("=====================================\n");
    printf("Kapitalstand zum Jahresende:\n\n");

    for (int year = 0; year < numberYears; year++)
    {
        double interest = (capitalStock / 100.0) * interestRate;

        // auf addieren        
        capitalStock = capitalStock + interest;

        // es gibt eine kuerzere Schreibweise fuer die letzte Zeile:
        // capitalStock += interest;

        printf("Jahr: %2d    Kapital: %.2f\n", (year + 1), capitalStock);
    }

    printf("\nAus %.2f Grundkapital wurden in %d Jahren %.2f Euro.\n",
        startCapitalStock, numberYears, capitalStock);
}

// =====================================================================================
// End-of-File
// =====================================================================================