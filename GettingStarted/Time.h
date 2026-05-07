// ======================================
// Header File für Time

#pragma once

// ======================================
// consts

#define MaxHours  24

// ======================================
// types

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

// ======================================
// function forward declarations

void printTime(const struct Time* t);
void resetTime(struct Time* t);

// =====================================================
// global data

