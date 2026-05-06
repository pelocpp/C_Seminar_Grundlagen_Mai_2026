#include <stdio.h>

int g_counter = 0;

static int g_SafeCounter = 0;

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

