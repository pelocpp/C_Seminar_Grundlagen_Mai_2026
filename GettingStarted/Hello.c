#include <stdio.h>

int g_counter = 0;

static int g_SafeCounter = 0;   // global, aber nur in DiESER Datei


// Echte globale Variablen      // ÜBERALL
// Statische globale Variablen  // nur in DiESER Datei
// Globale Variablen            // nur in einer FUNKTION


void alternateCounter()
{
    static int counter = 0;      // Globale Variable, sie ist nur "zugreifbar" in dieser Funktion

    counter++;

    printf("Counter: %d\n", counter);
}

void setSaveCounter(int newValue)
{
    g_SafeCounter = newValue;
}

void incrementSaveCounter()
{
    int localCounter = 0;
    printf("Log: incrementSaveCounter wurde aufgerufen\n");
    ++ g_SafeCounter;
}

int getSaveCounter()
{
    return g_SafeCounter;
}

// ================================

void hello()
{
    printf("Ahaa: %d\n", g_counter);
}

