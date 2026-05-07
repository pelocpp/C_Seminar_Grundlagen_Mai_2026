#pragma once

// #include <stdio.h>   // I wouldn't do this 

// =====================================================
// global functions

// exercises
extern void exercise_teuflische_folge();
extern void exercise_zinsberechnung();
extern void exercise_areaRectangle();
extern void exercise_areaCircle();
extern void exercise_Array();
extern void exercise_Adressen_tausche();
extern void exercise_Dynamic_Zinsen();

extern void demoGlobalData();
extern void demoArray();
extern void demoZeiger();
extern void demoDynamic();
extern void demoCharsAndStrings();

extern void func1();
extern void func2();
extern void hello();

// Beispiel zum Schutze einer globalen Variablen mit getter / setter
// NICHT: static int g_SafeCounter = 0; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
extern void setSaveCounter(int newValue);
extern void incrementSaveCounter();
extern int  getSaveCounter();
extern void alternateCounter();

// =====================================================
// global data

extern int g_value;
extern int g_counter;
// extern int g_einInt;

// =====================================================
