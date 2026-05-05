#include "stdio.h"   // Hier wird eine Bibliothek eingezogen // printf
// standard input output


// Typ Konvertierung

void main()
{
    int n = 100;

    double d = 100.0;   // I wouldn't do this

    int i = 1;

    long long l = 2;

    l = i;
}

void main_type_conversion ()
{
    int a = 1;
    int b = 2;

    double d = 100.7;
    double f = 200.0;

    a = b + 100;  // 102: int

 //   d = a;  // auch: implizite Typkonvertierung OHNE Verlust

    // implizit, mit Warning
    a = d;  // warning C4244: '=': conversion from 'double' to 'int', possible loss of data // 
            // wird abgeschnitten // truncation  // implizite Typkonvertierung MIT Verlust

    // Ich bin mir der Typkonvertierung bewusst: ich will diese haben
    a = (int) d;
}


// Einsprungpunkt // entry point
void main_for()
{
    // for

    // One Statement in One line

    for (int i = 0; i < 10; i++)
    {
        // anweisungen();
        printf("Schleife: %d\n", i);
    }

   // printf("Danach: %d\n", i);
}

void main_while()
{
    // while

    int a = 0;  
    int b = 10;


    int wieOftContinue = 0;

    while (a < b)
    {
        // ACHTUNG: Der Wert 5 für a steht für einen Fehler im Ablauf !!!
        //    Es soll mit dem nächsten gültigen Wert weiter gearbeitet werden

        if (a == 5) {  // VERGLEICH: Achtung: einfaches = ist Wertzuweisung
            // break;

            // a = a + 1;
            a++;
            continue;
        }

        printf(">>> a = %d - b = %d \n", a, b);

        a = a + 1;
    }

    printf("Fertig\n");
}


void main_while_mit_break()
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
