#include "graphique.h"

void dessiner_grillage(){
    unsigned int largeur, hauteur;
    MLV_get_window_size(&largeur, &hauteur);
    int pas_x = largeur / L;
    int pas_y = hauteur / H;
    for (int i = 0; i <= L; i++){
        int x = i * pas_x;
        MLV_draw_line(x, 0, x, hauteur, MLV_COLOR_DARK_GRAY);
    }
    for (int j =0; j <=H; j++){
        int y = j * pas_y;
        MLV_draw_line(0, y, largeur, y, MLV_COLOR_DARK_GRAY);
    }
}

void dessiner_cellule(int tab[H][L]){
    unsigned int largeur, hauteur;
    MLV_get_window_size(&largeur, &hauteur);
    int pas_x = largeur /L;
    int pas_y = hauteur /H;

    for (int i = 0; i <H; i++){
        for (int j = 0; j <L; j++){
            if (tab[i][j] ==1){
                MLV_draw_filled_rectangle(j * pas_x, i * pas_y, pas_x, pas_y, MLV_COLOR_BLACK);
            }
            else {
                MLV_draw_filled_rectangle(j * pas_x, i * pas_y, pas_x, pas_y, MLV_COLOR_WHITE);
            }
        }
    }
}
