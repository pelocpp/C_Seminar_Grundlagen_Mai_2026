
#include <stdio.h>

static void testNestedScope_01()
{
    int n = 123;
    printf("n = %d\n", n);

    // Block
    // Nebenrechnungen
    {
        int m = 456;
        printf("m = %d\n", m);
        n = m;
    }

    printf("n = %d\n", n);
}

// Empfehlung:
int g_n = 789;

static void testNestedScope_02()
{
    int n = 123;
    printf("n = %d\n", n);

    // Kann ich auf die globale Variable n zugreifen - HIER:  NEIN

    // Block
    // Nebenrechnungen
    {
        int n = 456;     // DIESER NAME n hier - Zeile 29 - ist fragwürdig // no-go
        printf("n = %d\n", n);

        // HIER: kann ich auf das n von Zeile 23 zugreifen: NEIN !!
    }

    printf("n = %d\n", n);  // 123 oder 456
}

void demoScope()
{
    testNestedScope_02();
}