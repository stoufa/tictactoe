/**
*
*               tictactoe.h
*       19 / 06 / 2013 | 20 / 06 / 2013
*
**/

#include <SDL/SDL.h>

#ifndef DEF_TIC_TAC_TOE
#define DEF_TIC_TAC_TOE

/// Les prototypes :
void initialiserEcran();
void initialiserMatrice();
void choisirXO();
void jouer();
void jouerJoueur();
void afficherEcran();
void effacerEcran();
void verifierJeu();
void jouerOrdinateur();
void pause();
void quitter();
void attendre(int); /// Pour donner plus du realisme au jeu
                    /// L'ordinateur doit attendre un peu
                    /// avant son mouvement

#define X 'x'
#define O 'o'
#define VIDE '_'
#define TAILLE_CASSE 100
#define VRAI 1
#define FAUX !VRAI

typedef int booleen;
typedef enum gagn { ORDINATEUR , JOUEUR } gagn;

booleen fin_Jeu = FAUX;
booleen gagne = FAUX;
gagn gagnant;
char T[3][3];
char Joueur = 0,Ordinateur = 0;
SDL_Surface *ecran = NULL;
SDL_Surface *xp = NULL, *op = NULL;
SDL_Rect position;
TTF_Font *police = NULL;
SDL_Color couleur = {0, 0, 0};
SDL_Surface *texte = NULL;

FMOD_SYSTEM *sys;
FMOD_SOUND *son;
FMOD_RESULT resultat;

#endif // DEF_TIC_TAC_TOE
