
void marche_graham(liste_d_d *l)
{ element_d *p0=l->debut,*p1=p0->suivant,*p2=p1->suivant;
float determinant;
int v_x1,v_y1,v_x2,v_y2;
while(p1!=l->debut)
{ dessine_segment(p0->x, p0->y, p1->x, p1->y, C_VERT);
dessine_segment(p1->x, p1->y, p2->x, p2->y, C_VERT);
rafraichis_ecran();
attends_delai(DELAI);
v_x1 = p0->x - p1->x;
v_y1 = p0->y - p1->y;
v_x2 = p2->x - p1->x;
v_y2 = p2->y - p1->y;
determinant = calcule_determinant(v_x1,v_y1,v_x2,v_y2);
if(determinant<0)
{ dessine_segment(p0->x, p0->y, p1->x, p1->y, C_NOIR);
dessine_segment(p1->x, p1->y, p2->x, p2->y, C_NOIR);
rafraichis_ecran();
attends_delai(DELAI);
p0->suivant = p2;
p2->precedent = p0;
free(p1);
if(p0!=l->debut)
{ p1 = p0;
p0 = p0->precedent;
}
}
else
{ dessine_segment(p0->x, p0->y, p1->x, p1->y, C_BLEU);
dessine_segment(p1->x, p1->y, p2->x, p2->y, C_NOIR);
rafraichis_ecran();
attends_delai(DELAI);
p0 = p1;
p1 = p2;
p2 = p2->suivant;
if(p2 == NULL)
p2 = l->debut;
}
}
dessine_segment(p0->x, p0->y, p1->x, p1->y, C_BLEU);
rafraichis_ecran();
}

