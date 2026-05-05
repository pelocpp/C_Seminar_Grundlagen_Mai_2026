// =====================================================================================
// Unterprogramme.c
// =====================================================================================

#include <stdio.h>

// Unterprogramm: Für beliebige Rechtecke
float areaRectangle(float w, float h)
{
    float result = w * h;  // result ist auch eine Variable:
                                    // Hilfsvariable zum Rechnen

    return result;
}

float areaCircle(double radius)
{
    float area = 2 * 3.141592653589793 * radius;

    return area;
}

void exercise_areaRectangle()
{
    float width;
    float height;

    printf("Bitte Breite eingeben: ");
    scanf_s("%f", &width);  // Achtung: &

    printf("Bitte Hoehe eingeben: ");
    scanf_s("%f", &height);  // Achtung: &

                              // an das Unterprogramm: hinwärts: width, height
    double area = areaRectangle(width, height);
    // area: zurück // raus aus dem Unterprogramm

    printf("Rectangle with width %f and height %f has area %f.\n", width, height, area);
}

void exercise_areaCircle()
{
    float radius;

    printf("Bitte Radius eingeben: ");
    scanf_s("%f", &radius);  // Achtung: &

    float area = areaCircle(radius);

    printf("Circle with radius %f has area %f.\n", radius, area);
}


    
void main()
{
    exercise_areaRectangle();
    exercise_areaCircle();
}

// =====================================================================================
// End-of-File
// =====================================================================================