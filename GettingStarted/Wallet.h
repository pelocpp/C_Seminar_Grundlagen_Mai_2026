#pragma once

struct wallet
{
    // Euros
    unsigned int euros; // euros
    unsigned int cents; // Cents
};

typedef struct wallet Wallet;

// Öffentliche Schnittstelle
extern void initWallet         (      Wallet* wallet, unsigned int euros, unsigned int cents);
extern void printWallet        (const Wallet* wallet);
extern void addEurosToWallet   (      Wallet* wallet, unsigned int euros);             // Euros in den Geldbeutel legen
extern int  subEurosFromWallet (      Wallet* wallet, unsigned int euros);             // Euros rausnehmen - WENN ES DENN GEHT - 0 = Fehler, 1 : Succes

extern int  equalWallets       (const Wallet* leftWallet, const Wallet* rightwallet);  // Zero if leftWallet and rightwallet compare equal.
extern int  compareWallets     (const Wallet* leftWallet, const Wallet* rightwallet);  // Zero if leftWallet and rightwallet compare equal.

