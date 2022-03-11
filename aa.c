int est_prefixe(liste_s l1, liste_s l2)
{ element_s *temp1=l1.debut, *temp2=l2.debut;
liste_s l1_bis, l2_bis;
int resultat;
if (temp2==NULL)
resultat = 1;
else
if (temp1==NULL)
resultat = 0;
else
if (temp1->valeur == temp2->valeur)
{ l1_bis.debut = temp1->suivant;
l2_bis.debut = temp2->suivant;
resultat = est_prefixe(l1_bis,l2_bis);
}
else
resultat = 0;
return resultat;
}
