/**
*
*               TIC-TAC-TOE
*       19 / 06 / 2013 | 20 / 06 / 2013
*
**/

#include <stdio.h>
#include <stdlib.h>
//#include "tictactoe.h"

int main(int argc,char *argv[])
{
    initialiserEcran();
    initialiserMatrice();
    choisirXO();
    effacerEcran();
    afficherEcran();
    jouer();
    return(EXIT_SUCCESS);
}
