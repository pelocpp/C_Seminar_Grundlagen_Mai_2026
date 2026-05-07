
#include "Time.h"
#include "Time.h"

#include <stdio.h>


// Unter EINEM Namen - 'Time' - mehrere sinvollerweise,
// zusammengehörende Daten zusammengefasst.

// Diese hier stehende Vereinbarung ist nur in dieser Datei sichtbar / verfügbar:

struct StrukturBeispiel
{
    double d1;
    double d2;
    int    i1;
    int    i2;
    int    i3;
    char   ch12;
    char   ch11;
    char   ch2;
};


static void testStructTime01()
{
    struct Time now;

    now.hours = 15;
    now.minutes = 36;
    now.seconds = 33;

    struct Time end;

    end.hours = 17;
    end.minutes = 0;
    end.seconds = 0;
}

void printTime(const struct Time* t)   // read-only Mentalität
{
    // t->hours = 999;

    printf("Time: %02d:%02d:%02d\n", t->hours, t->minutes, t->seconds);
}

//static void resetTime(struct Time t)
//{
//    t.hours = 0;
//    t.minutes = 0;
//    t.seconds = 0;
//}

void resetTime(struct Time* t)
{
    //(*t).hours = 0;
    //(*t).minutes = 0;
    //(*t).seconds = 0;

    // Dennis Ritchie einen schwachen Moment gehabt:
    t->hours = 0;
    t->minutes = 0;
    t->seconds = 0;

    // oder
    struct Time empty = { 0, 0, 0 };
    *t = empty;  // könnte schneller sein // rep prefix Operation
}

static void testStructTime02()
{
    struct Time now = { 15, 40, 0 };
    struct Time end = { 17, 0, 0 };

    now = end;  // Wertzuweisung von Strukturvariablen

  //  printf("Now: %02d:%02d:%02d\n", now.hours, now.minutes, now.seconds);
    printTime(&now);
    printTime(&end);

    resetTime(&now);
    printTime(&now);
}

void demoStructs()
{
    testStructTime02();
}