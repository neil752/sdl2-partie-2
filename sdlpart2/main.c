#include <stdio.h>
#include <stdlib.h>


 /*question 1
 il faut mettre SDL_image pour pouvoir mettre une image sous plusieurs formats, avec l'API cette image pour �tre en represent� en SDL_Surface et SDL_Texture */

 /*question 2
 en premier, t�l�charger la librairie, ensuite, ajout� son contenue dans le dossier libraire SDL.
 deuxieme partie, dans build options,  ajoutez dans linker settings,
 puis link librairies, les liens vers les fichiers libSDL2_image.a et libSDL2_image.dll.a. ,
 enfin il faut ajouter lSDL2_image dans other linker options .Les dll (dans cette ordre) : SDL2_image.dll, zlib1.dll, puis selon les formats:
 libjpeg-9.dll, libpng16-16.dll, libtiff-5.dll et libwebp-7.dll dans le dossier du projet .Dans la partie include du code il faut ajouter "include SDL_image.h."
 */

 /*question 3*/
int main(int argc, char *argv[])
{
   sdl->pWindow = NULL;
    sdl->pRenderer = NULL;
    sdl->pSurface = NULL;
    sdl->pTexture = NULL;
    //gameobjet
    SDL_Rect rect = {0,0,240,400};
    SDL_Surface *image = NULL;
    //chargement d'une image
    image = IMG_Load("oui.png");
    //creation d'une texture
    sdl.pTexture = SDL_CreateTextureFromSurface(sdl.pRenderer,image);
    //pr�paration affichage
    SDL_RenderCopy(sdl.pRenderer,sdl.pTexture,NULL,&rect);
    //refresh
    SDL_RenderPresent(sdl.pRenderer);
    SDL_Delay(5000);
    //arret
    SDLManager_Stop(&sdl);
    return 0;
}

/*question 4
le tile set est une collection d'image rectangulaire
dans  une grille de petit carr�e et cela serre � anim� un personnage et cre� des rendus en r�cup�rant ces m�me tiles*/

/*question 5*/
int main(int argc, char *argv[])
{
    //init image
    SDL_Rect rect = {100,100,240,400},src= {0,0,16,28};
    SDL_Surface *image = NULL;
    SDLManager_Init(&sdl);
    SDL_SetRenderDrawColor(sdl.pRenderer,255,255,255,1);
    SDL_RenderClear(sdl.pRenderer);
    //chargement de l'image
     image = IMG_Load("tilz.png");
    //cr�ation de la texture
    sdl.pTexture = SDL_CreateTextureFromSurface(sdl.pRenderer,image);
     int i =0;

    //animation
    for (i=0;i<8;i++) {
        src.x = i*16;
    //Pr�parer l'affichage
        SDL_RenderCopy(sdl.pRenderer,sdl.pTexture,&src,&rect);
    //rafra�chire
        SDL_RenderPresent(sdl.pRenderer);
        SDL_Delay(600);
    }
    //arret
    SDLManager_Stop(&sdl);




