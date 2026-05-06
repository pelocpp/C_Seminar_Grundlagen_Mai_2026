#pragma once

// #include <stdio.h>   // I wouldn't do this 

// global functions
extern void exercise_areaRectangle();
extern void exercise_areaCircle();

extern void demoGlobalData();
extern void demoArray();


extern void exercise_Array();

extern void test_zeiger();

extern void func1();
extern void func2();


extern void hello();

// global data
extern int g_value;
extern int g_counter;

// NICHT: static int g_SafeCounter = 0; !!!!!!!!!!!!!!!!!!!!!!!!!!!!!

extern void setSaveCounter(int newValue);
extern void incrementSaveCounter();
extern int getSaveCounter();
