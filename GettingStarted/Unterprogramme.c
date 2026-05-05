

#include <stdio.h>

void sayHello(int counter)  // Parameter ,  Platzhalter für den Wert, der beim Aufruf übergeben wird
{
    for (int i = 0; i != counter; i++) {
        printf("Good Morning\n");
    }
}

// Exemplarisch: Komplexe Berechnung  // Harmonische Reihe
int malZwei(int value)   // Parameter / Platzhalter
{
    int result;   // Variable zum Rechnen  

    result = 2 * value;

    return result;
}

int product(int value1, int value2, int value3)   // Parameter / Platzhalter werden durch , getrennt
{
    return value1 * value2 * value3;
}

int genericProduct() 
{
    int value1;
    int value2;

    printf("Bitte ersten Wert eingeben: ");
    scanf_s("%d", & value1);  // Achtung: &

    printf("Bitte zweiten Wert eingeben: ");
    scanf_s("%d", &value2);  // Achtung: &

    return value1 * value2;
}

float genericProductFloat()
{
    float value1;
    float value2;

    printf("Bitte ersten Wert eingeben: ");
    scanf_s("%f", &value1);  // Achtung: &

    printf("Bitte zweiten Wert eingeben: ");
    scanf_s("%f", &value2);  // Achtung: &

    return value1 * value2;
}


void main_unterprogramme()
{
    int wieOft = 3;

    sayHello(wieOft + 3);  // Aktualler Wert / Ausdruck: Wird an dem Platzhalter 'counter' zugewiesen

    int ergebnis;

    ergebnis = malZwei(5);
    ergebnis = malZwei(15);
    ergebnis = malZwei(30);

    float ergebnisF = genericProductFloat();

    // int n;

    printf("Ergebnis: %d\n", ergebnis);  // Exemplarisch: Verwendung
}

