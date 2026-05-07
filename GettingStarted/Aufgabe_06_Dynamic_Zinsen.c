#include <stdio.h>
#include <malloc.h>

static int doubleCapital(double capitalStock, double interestRate)
{
    double newCapital = capitalStock;
    int years = 0;

    // compute number of years
    while (newCapital < 2 * capitalStock) {
        double interest = (newCapital / 100.0) * interestRate;
        newCapital = newCapital + interest;
        years = years + 1;
    }

    // compute money increase during the years
    double* capitalDevelopment = (double*)malloc(sizeof(double) * years);
    if (capitalDevelopment == NULL) {
        return -1;
    }

    newCapital = capitalStock;

    for (int i = 0; i < years; i++) {
        double interest = (newCapital / 100.0) * interestRate;
        newCapital = newCapital + interest;
        capitalDevelopment[i] = newCapital;
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

    int years = doubleCapital(myCapitalStock, myInterestRate);

    printf("Needed %d years.\n", years);
}

