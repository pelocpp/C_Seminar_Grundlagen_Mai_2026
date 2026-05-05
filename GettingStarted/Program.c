// Vereinbarungen des Vertrauens
// Vorwärts- / Extern-Deklarationen

//extern void exercise_areaRectangle();
//extern void exercise_areaCircle();

#include <stdio.h>

#include "MyFunctions.h"

// Geht / Ginge
// extern int g_value;

int main()
{
    //exercise_areaRectangle(123);
    //exercise_areaCircle();

    printf("bin hier in main: %d\n", g_value);
    g_value++;
    demoGlobalData();

    //func1();
    func2();


    return 123;
}
