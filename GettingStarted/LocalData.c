
#include <stdio.h>

// auf der obersten Ebene
// auﬂerhalb von Funktionen
//int g_value = 789;

void func1()
{
    // Lokal -  aktuell
    int value = 123;
    double dFunc_01 = 1.1;
    printf("func1: %d\n", value);
}

void func2()
{
    int value = 456;
    double dFunc_02 = 2.2;

    printf("func2: %d\n", value);

    func1();
}


