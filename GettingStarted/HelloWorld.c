#include "stdio.h"   // Hier wird eine Bibliothek eingezogen // printf
// standard input output


void main()
{
    // Hier faengt das programm an

    int a = 1;
    int b = 2;
    int c = a + b;

    printf("Hello World\n");

    int n = 123;
    long long m = 124;
    float f = 123.123f;
    double d = 123.123;

    printf("int: %d\n", sizeof(int));
    printf("long: %d\n", sizeof(long));
    printf("long long: %d\n", sizeof(long long));

    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
}
