#include <stdio.h>
#include <stdlib.h>

static int doubleCapital(double capitalStock, double interestRate)
{
    double newCapital = capitalStock;
    int years = 0;

    // compute number of years
    while ( newCapital < 2 * capitalStock ) {
        double interest = (newCapital / 100.0) * interestRate;
        newCapital = newCapital + interest;
        years = years + 1;
    }

    // compute money increase during the years
                                                 //    8          *   18
    double* capitalDevelopment = (double*) malloc( sizeof(double) * years );
    if (capitalDevelopment == NULL) {
        return -1;
    }

    newCapital = capitalStock;

    // erste Möglichkeit
    // Best Practice: Tipp
    // Indices von Feldern (i) sollten immer von 0 bis Obere Grenze -1 laufen
    for (int i = 0; i < years; i++) {
        double interest = (newCapital / 100.0) * interestRate;
        newCapital = newCapital + interest;
        capitalDevelopment[i] = newCapital;
    }

    // zweite Möglichkeit - geht genauso
    for (int i = 1; i <= years; i++) {
        double interest = (newCapital / 100.0) * interestRate;
        newCapital = newCapital + interest;
        capitalDevelopment[i-1] = newCapital;  // 1, 2, .. 18  // Array: 0 .. 17  Korrektur: i-1
    }

    // print development
    for (int i = 0; i < years; i++) {
        printf("%2d. Year: %.2f\n", i, capitalDevelopment[i]);
    }

    free(capitalDevelopment);

    return years;
}

void exercise_Dynamic_Zinsen()
{
    double myCapitalStock = 1000.0;
    double myInterestRate = 4.0;

    printf("CapitalStock: %.2f, CapitalStock: %.2f\n", myCapitalStock, myInterestRate);

 //   int years = doubleCapital(1000.0, 4.0);
    int years = doubleCapital(myCapitalStock, myInterestRate);

    printf("Needed %d years.\n", years);
}

