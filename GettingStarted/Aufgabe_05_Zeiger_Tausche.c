#include <stdio.h>

static void tausche(int x, int y)  // Call-by-Copy - tut nichts - falsch
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

static void tauscheEx(int* xAdr, int* yAdr)  // Call-by-Address - korrekt
{
    int tmp;

    tmp = *xAdr;
    *xAdr = *yAdr;
    *yAdr = tmp;
}

void exercise_Adressen_tausche()
{
    int n = 5;
    int m = 10;

    printf("%d - %d\n", n, m); // 5, 10
    tausche(n, m);
    printf("%d - %d\n", n, m); // 5, 10 ?!?

    tauscheEx(&n, &m);
    printf("%d - %d\n", n, m); // 10, 5 !!!
}
