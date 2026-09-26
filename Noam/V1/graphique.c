#include "graphique.h"


void dessiner_grillage(int L, int H){
    unsigned int largeur, hauteur;
    MLV_get_window_size(&largeur, &hauteur);
    int pas_x = largeur / L;
    int pas_y = hauteur / H;

    for (int i = 0; i <= L; i++){
        int x = i * pas_x;
        MLV_draw_line(x, 0, x, hauteur, MLV_COLOR_GRAY);
    }

    for (int j = 0; j <= H; j++){
        int y = j * pas_y;
        MLV_draw_line(0, y, largeur, y, MLV_COLOR_GRAY);
    }
}
