#include "stdio.h"   // Hier wird eine Bibliothek eingezogen // printf
// standard input output

// Einsprungpunkt // entry point
void main()
{
    // while

    int a = 0;
    int b = 10;

    //while ( a < b )
    //{
    //    printf("a = %d - b = %d \n", a, b );
    //    a = a + 1;
    //}

    while (a < b)
    {
        printf("a = %d - b = %d \n", a, b);

        a = a + 1;

        // ACHTUNG: Der Wert 5 für a steht für einen Fehler im Ablauf !!!
    
        if (a == 5) {  // VERGLEICH: Achtung: einfaches = ist Wertzuweisung
            break;
        }
    }

    printf("Fertig\n");
}


void main_exakt()
{
    // if - unter der Haube
    // true, false: bool
    // Keep it simple: false: 0, true: ALLES AUSSER 0, datentyp: int

    int a = 1;
    int b = 2;

    int condition = a > b;

    if (condition)
    {
        printf("ist erfuellt\n");
    }

    // VORSCHLAG
    if (condition != 0)  // besser lesbar
    {
        printf("ist erfuellt\n");
    }
}


void main_mit_logischen_operatoren()
{
    // if - Anweisung
    int a = 7;
    int b = 6;

    int c = 3;
    int d = 2;

    // 2 Bedingungen: Und-Verknüpfung
    if ( a < b && c < d )
    {
        printf("ist erfuellt\n");
    }

    if (a < b || c < d)
    {
        printf("ist erfuellt\n");
    }

    if ( ! ( a < b || c < d  ) )
    {
        printf("ist erfuellt\n");
    }

    if ( ! ( (a < b) || (c < d) ) )
    {
        printf("ist erfuellt\n");
    }
}


void main_if_simple()
{
    // if - Anweisung
    int a = 7;
    int b = 7;

    if (a < b)
    {
        printf("ist\n");
        printf("erfuellt: kleiner\n");
    }
    else if(a > b)
    {
        printf("ist erfuellt: groesser\n");
    }
    else
    {
        printf("ist erfuellt: sind gleich\n");
    }
}



void main_hello_world()
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

    size_t sizeInt = sizeof(int);  // kein int, sondern size_t 

    printf("int: %zu\n", sizeof(int));
    
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));

    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));

    printf("size_t: %zu\n", sizeof(size_t));
}
