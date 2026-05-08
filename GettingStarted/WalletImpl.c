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
    if (wallet == NULL) {
        return 0u;
    }

    unsigned int totalCents = wallet->euros * 100u + wallet->cents;
    return totalCents;
}


// Implementierungs-Datei: Wallet.c  // Hier: Aufgabe_07_Wallet.c // Besserer Name: Wallet.c
// Implementierung der öffentlichen Schnittstelle
void initWallet(Wallet* wallet, unsigned int euros, unsigned int cents)
{
    if (wallet == NULL) {
        return;
    }

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
    if (wallet == NULL) {
        printf(">>>> Wallet: (null)\n");
        return;
    }

    unsigned int total = toCents(wallet);
    printf(">>>> Wallet: %u Euros, %u Cents [Total: %u].\n", wallet->euros, wallet->cents, total);
}

void addEurosToWallet(Wallet* wallet, unsigned int euros)
{
    // euros must be greater 0
    if (wallet == NULL) {
        return;
    }

    wallet->euros = wallet->euros + euros;
}

int subEurosFromWallet(Wallet* wallet, unsigned int euros)
{
    if (wallet == NULL) {
        return 0;
    }

    if (wallet->euros >= euros) {

        wallet->euros = wallet->euros - euros;
        return 1;
    }
    else {
        return 0;
    }
}

// Gleichheit
int equalWallets(const Wallet* leftWallet, const Wallet* rightWallet)
{
    // Links: 2 Euro 50 ct
    // Rechte: 1 Euro 150 ct

    // Return 1 when equal, 0 otherwise (boolean-like)
    if (leftWallet == NULL || rightWallet == NULL) {
        return 0;
    }

    if (leftWallet->euros == rightWallet->euros && leftWallet->cents == rightWallet->cents) {
        return 1;
    }
    else {
        return 0;
    }
}

// Vergleich: kleiner, gleich, groesser
int compareWallets(const Wallet* leftWallet, const Wallet* rightWallet)
{
    // Return Value:
    //    < 0	first wallet has less / second wallet has more
    //    0	the contents of both wallets are equal
    //    >0	first wallet has more / second wallet has less

    if (leftWallet == NULL || rightWallet == NULL) {
        // Define NULL as less than a non-NULL wallet; if both NULL -> equal
        if (leftWallet == rightWallet) {
            return 0;
        }
        return (leftWallet == NULL) ? -1 : 1;
    }

    if (leftWallet->euros < rightWallet->euros) {
        return -1;
    }
    else if (leftWallet->euros > rightWallet->euros) {
        return 1;
    }
    else /* same amount of euros */ {

        if (leftWallet->cents < rightWallet->cents) {
            return -1;
        }
        else if (leftWallet->cents > rightWallet->cents) {
            return 1;
        }
        else {
            return 0;  // both wallets have same sum
        }
    }
}
