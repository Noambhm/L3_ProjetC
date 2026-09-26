#include <stdio.h>
#include "graphique.h"
#define L 10
#define H 10

int main(int argc, char *argv[]){
    int tab[H][L]={0};
    int continuer = 1;
    MLV_create_window( "Jeu de la vie", "VIE", 750, 750);
    while (continuer){
        
        MLV_update_window();

    }
    MLV_wait_seconds(3);

	MLV_free_window();

    return 0;
}
