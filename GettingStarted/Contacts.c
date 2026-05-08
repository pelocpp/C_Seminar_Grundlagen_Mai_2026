
#include <stdio.h>   // strlen
#include <string.h>  // printf
#include <stdlib.h>  // malloc, free

// constants
#define MaxContacts     10
#define MaxBufferSize   100

// types

struct contact
{
    char* m_firstName;      // Optimale Lösung: Jeder Name ist dynamisch im Speicher abzulegen: Heap
    char* m_lastName;       // Optimale Lösung: Jeder Name ist dynamisch im Speicher abzulegen

    // char firstName2[16];  // Ginge ... aber es wird viel Speicher vergeudet

    size_t m_number;
    char   m_empty;        // 0 == empty // 1 == belegt
};

typedef struct contact Contact;

// data

Contact g_contacts[MaxContacts];    // auch das ginge dynamisch ...


static void initGlobalContacts()
{
    for (int i = 0; i < MaxContacts; i++)
    {
        g_contacts[i].m_empty = 0;
    }
}

static void releaseGlobalContacts()
{
    for (int i = 0; i < MaxContacts; i++)
    {
        if (g_contacts[i].m_empty == 1)
        {
            free(g_contacts[i].m_firstName);
            free(g_contacts[i].m_lastName);

            g_contacts[i].m_firstName = NULL;
            g_contacts[i].m_lastName = NULL;

            g_contacts[i].m_number = 0;

            g_contacts[i].m_empty = 0;
        }
    }
}

static void printGlobalContacts()
{
    for (int i = 0; i < MaxContacts; i++)
    {
        if (g_contacts[i].m_empty == 1) {

            printf("Contact: %s %s - Nr: %zu\n", 
                g_contacts[i].m_firstName, g_contacts[i].m_lastName, g_contacts[i].m_number);
        }
    }
}


static void enterContact()
{
    char bufferName[MaxBufferSize];  // Annahme:  Keine Vorname sollte länger sein

    Contact tmpInput = { NULL, NULL, 0, 0 };

    printf("Bitte Vorname eingeben: ");
    scanf_s("%s", bufferName, MaxBufferSize);

    // Jetzt legen wir den Vornamen am Heap an
    size_t len = strlen(bufferName) + 1;  // für terminierende Null !!!

    tmpInput.m_firstName = malloc(len * sizeof(char));  // Adresse vom Heap abspeichern

    // Puffer umkopieren: bufferName ==> tmpInput.m_firstName: string copy:  strcpy
    strcpy_s(tmpInput.m_firstName, len, bufferName);  // nach, wie gross, von

    // ----------------------------------------------
    // Nachname eingeben

    printf("Bitte Nachname eingeben: ");
    scanf_s("%s", bufferName, MaxBufferSize);

    // Jetzt legen wir den Vornamen am Heap an
    len = strlen(bufferName) + 1;  // für terminierende Null !!!

    tmpInput.m_lastName = malloc(len * sizeof(char));  // Adresse vom Heap abspeichern

    // Puffer umkopieren: bufferName ==> tmpInput.m_lastName: string copy:  strcpy
    strcpy_s(tmpInput.m_lastName, len, bufferName);  // nach, wie gross, von

    // ----------------------------------------------
    // Tel.Nummer eingeben

    printf("Bitte Tel.Nummer eingeben: ");
    size_t tmpNumber = 0;
    scanf_s("%zu", &tmpNumber);

    tmpInput.m_number = tmpNumber;

    // ----------------------------------------------
    // tmpInput als 'beleget' kennzeichnen
    tmpInput.m_empty = 1;
    
    // ----------------------------------------------
    // tmpInput zu g_contacts hinzufügen / eintragen
    for (int i = 0; i < MaxContacts; i++)
    {
        if (g_contacts[i].m_empty == 0)
        {
            g_contacts[i] = tmpInput;
            break;
        }
    }
}


static void searchContact()
{
    // Nur den Vornamen 
    char bufferName[MaxBufferSize];  

    printf("Bitte Vorname eingeben: ");
    scanf_s("%s", bufferName, MaxBufferSize);

    // ====================================
    // Diesen Namen im globalen Repository suchen

    int found = 0; // nicht gefunden

    for (int i = 0; i < MaxContacts; i++)
    {
        if (g_contacts[i].m_empty == 1)
        {
            if (strcmp(bufferName, g_contacts[i].m_firstName) == 0)
            {
                // Habe Person gefunden
                printf("Person %s hat Tel.Nr. %zu\n", bufferName, g_contacts[i].m_number);
                found = 1;
                break;
            }
        }
    }

    if (found == 0) {
        printf("Person %s nicht gefunden\n", bufferName);
    }
}


// functions
void exercise_Contacts()
{
    initGlobalContacts();

    enterContact();
    enterContact();

    printGlobalContacts();

    searchContact();

    releaseGlobalContacts();
}
