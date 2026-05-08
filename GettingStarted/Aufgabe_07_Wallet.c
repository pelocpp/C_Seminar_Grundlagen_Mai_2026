
#include "Wallet.h"

// Anwendung
void exercise_Wallet()
{
    Wallet myWallet = { 50, 1000 };  // HIER HABE ICH KEINE KONTROLLE

    //myWallet.cents = 10;
    //myWallet.euros = 50;
    initWallet(&myWallet, 50, 70);   // HIER HABE ICH  KONTROLLE
    printWallet(&myWallet);


    //toCents(& myWallet);  Geht nicht, weil static, "private"


    //addEurosToWallet(&myWallet, 20);
    //printWallet(&myWallet);

    //subEurosFromWallet(&myWallet, 60);
    //printWallet(&myWallet);

    //Wallet myWifesWallet = { 0, 0 };
    //initWallet(&myWifesWallet, 100, 0);

    //compareWallets(&myWallet, &myWifesWallet);
}
