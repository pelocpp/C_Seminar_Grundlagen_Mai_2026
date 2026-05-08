// Übung: Geldbeutel

// Man kann Geld reintun... und raustun ... nicht mehr, als drin ist ...
// Zusatz: Die Cents sollten zwischen 0 und 100 sein. // Passt nicht zum echten Leben
// 

// Header-File
#include "Wallet.h"

#include <stdio.h>

// Interne Schnittstelle
// Private, interne Schnittstelle
// 2 Euro, 50 cent ==> 250 cent
static unsigned int toCents(const Wallet* wallet)
{
    unsigned int totalCents = wallet->euros * 100 + wallet->cents;
    return totalCents;
}


// Implementierungs-Datei: Wallet.c  // Hier: Aufgabe_07_Wallet.c // Besserer Name: Wallet.c
// Implementierung der öffentlichen Schnittstelle
void initWallet(Wallet* wallet, unsigned int euros, unsigned int cents)
{
    int centsKleiner100 = 0;
    int centsInEuros = 0;

    if (cents >= 100) {
        centsKleiner100 = cents % 100;
        centsInEuros = cents / 100;

        wallet->euros = euros + centsInEuros;
        wallet->cents = centsKleiner100;
    }
    else
    {
        wallet->euros = euros;
        wallet->cents = cents;
    }
}

void printWallet(const Wallet* wallet)
{
    unsigned int total = toCents(wallet);
    printf(">>>> Wallet: %u Euros, %u Cents [Total: %u].\n", wallet->euros, wallet->cents, total);
}
