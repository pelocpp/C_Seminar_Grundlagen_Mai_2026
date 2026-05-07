
#include <stdio.h>
#include <string.h>
#include <ctype.h>

static void test_CharsAndStrings_01()
{
                    // eine char Variable belegt EIN byte im Speicher
    char ch = 'A';  // Was liegt da intern im Speicher

    printf("ch = %c\n", ch);

    ch = 0;       // 1. Möglichkeit
    ch = '\0';    // 2. Möglichkeit:  backslash Null // binäre Null

    printf("ch = %c\n", ch);

    ch = 55;   // 7    ASCII Code / int

    printf("%c", ch);

    // ch = 12;   // Formfeed
    ch = 13;   // Wagenrücklauf

    printf("%c", ch);

    ch = 56;   // 8

    printf("%c", ch);
}


static void test_CharsAndStrings_02()
{
    // Strings
    char* s = "123";

    // Wie lange ist diese Zeichenkette ???   3 (anschaulich) oder 4 (Ablage im Speicher)

    printf("s = \"%s\"\n", s);
}

static void test_CharsAndStrings_03()
{
    // Strings, auf eine zweite Weise definiert
    char s[] = "ABC";

    printf("s = \"%s\"\n", s);
}

static void test_CharsAndStrings_04()
{
    // Strings, auf eine zweite Weise definiert
    char s[4];

    s[0] = 'A';
    s[1] = 'B';
    s[2] = 'C';
    s[3] = '\0';

    printf("s = \"%s\"\n", s);
}

static int string_length(char* s)
{
    int len = 0;

    while (  *s != '\0') {
        //len = len + 1;
        //s = s + 1;    // Zeiger-Arithmetik
        len++;
        s++;    // Zeiger-Arithmetik
    }

    return len;
}

static int string_lengthEx(char* s)
{
    int i = 0;    // Index

    while ( s[i] != '\0') {
        i = i + 1;
    }

    return i;
}

static void test_CharsAndStrings_05()
{
    char* kette = "ABC";

    int l = string_lengthEx(kette);

    printf("Len = %d\n", l);
}

// ==============================================
// Vorbereitung einer Übung

static void tueEtwasMitEinerZeichenkette(const char* s)
{
    // Wegen const geht nur lesender Zugriff
    char ch = s[0];

    // s[0] = '!';   // Hmmmm, kann ich mich vor so etwas schützen
}

static void tueEtwasMitEinerZeichenketteAuchSchreibend(char* s)
{
    // Wegen const geht nur lesender Zugriff
    char ch = s[0];

    s[0] = '!';   // Hmmmm, kann ich mich vor so etwas schützen
}

static void test_CharsAndStrings_06()
{
    const char* kette = "AEG";

    char kette2[4] = "AEG";

    tueEtwasMitEinerZeichenketteAuchSchreibend(kette2);   // warning 'function': different 'const' qualifiers
}

// ==========================================================

// schreibenden Zugriff
static void wandleInGrossbuchstabenUm(char* s)
{
    // 1. Frage: Zähler // wie lange ist die Zeichenkette
    int length = string_length(s);

    for (int i = 0; i < length; i++)
    {
        char ch = s[i];

        // ist ch ein kleiner Buchstabe
        if ( ch >= 'a' && ch <= 'z')    // besser lesbar
        {
            // printf("found small letter");

            // klein in groß Umwandeln: 32 abziehen gemäß ASCII Tabelle
            ch = ch - ( 'a' - 'A' );  // ist 32 als Abstand  // etwas Crazy

            s[i] = ch;   // Grossbuchstaben in das Original schreiben
        }
    }
}

static void wandleInGrossbuchstabenUmMitCRT(char* s)
{
    size_t length = strlen(s);   // Länge ermitteln

    for (int i = 0; i < length; i++)
    {
        char ch = s[i];

        // ist ch ein kleiner Buchstabe
        if ( islower (ch) )    // besser lesbar
        {
            ch = toupper(ch) ;  
            s[i] = ch; // Grossbuchstaben in das Original schreiben
        }
    }
}

static void wandleInGrossbuchstabenUmMitCRTMoreKompakt(char* s)
{
    size_t length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
}

static void test_Exercise_07()
{
    char kette[] = "C is beautiful";  // ist ein Array, also darf geschrieben werden, die Daten sind am Stack

    printf("Kette: %s\n", kette);

    wandleInGrossbuchstabenUm(kette);

    printf("Kette: %s\n", kette);
}

void demoCharsAndStrings()
{
    test_Exercise_07();
}