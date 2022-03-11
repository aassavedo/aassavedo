
void dessine_temps(liste_d l)
{ int x_max = 1 + calcule_taille(l);
element_d *e = trouve_max(l);
int y_max = e->valeur;
int x_marge = (FENETRE_LARGEUR-x_max)/2;
int y_marge = (FENETRE_HAUTEUR-y_max)/2;
int x=x_marge+2,y;
int trait=2;
// on dessine les points
e = l.debut;
while(e!=NULL)
{ y = y_marge+y_max-e->valeur;
dessine_point(x,y,C_ROUGE);
e = e->suivant;
x++;
}
// on dessine le repere
dessine_segment(x_marge,y_marge,x_marge,y_marge+y_max,C_BLANC);
dessine_segment(x_marge,FENETRE_HAUTEUR-y_marge,
x_marge+x_max,FENETRE_HAUTEUR-y_marge,C_BLANC);
// axe des abscisses
for(x=0;x<x_max;x=x+10)
dessine_segment(x_marge+x,FENETRE_HAUTEUR-y_marge,
x_marge+x,FENETRE_HAUTEUR-y_marge+trait,C_BLANC);
// axe des ordonnées
for(y=0;y<y_max;y=y+10)
dessine_segment(x_marge-trait,FENETRE_HAUTEUR-y_marge-y,x_marge,
FENETRE_HAUTEUR-y_marge-y,C_BLANC);
rafraichis_fenetre();
}
