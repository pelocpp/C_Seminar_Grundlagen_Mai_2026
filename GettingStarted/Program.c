// Vereinbarungen des Vertrauens
// Vorwärts- / Extern-Deklarationen

#include <stdio.h>

#include "MyFunctions.h"

// Geht / Ginge
// extern int g_value;

// extern int g_counter;

//void bonbon()
//{
//    bonbon();
//}

int main(int argc, char* argv[])
{
    //extern int g_counter;

    demoStructs();

    return 0;

    incrementSaveCounter();
    incrementSaveCounter();
    incrementSaveCounter();
    incrementSaveCounter();

    printf("Main: %d\n", getSaveCounter ());

    exercise_Array();

  //  hello();

    return 0;
}
