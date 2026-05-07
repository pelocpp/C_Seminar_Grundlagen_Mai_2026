
#include <stdio.h>


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
        len = len + 1;
        s = s + 1;
    }

    return len;
}

static void test_CharsAndStrings_05()
{
    char* kette = "ABC";

    int l = string_length(kette);

    printf("Len = %d\n", l);
}

void demoCharsAndStrings()
{
    test_CharsAndStrings_05();
}