int copie_fichier(char *source, char *cible)
{ int resultat = 0;
// on ouvre le fichier source en lecture
FILE *src;
if((src = fopen(source, "r")) == NULL)
{ //traitement en cas d'erreur
printf("copie_fichier: erreur dans fopen\n");
return -1;
}
// on ouvre le fichier cible en écriture
FILE *cbl;
if((cbl = fopen(cible, "w")) == NULL)
{ //traitement en cas d'erreur
printf("copie_fichier: erreur dans fopen\n");
return -1;
}
// on lit la source ligne par ligne
// en écrivant chaque ligne dans la cible
char tampon[50];
while(fgets(tampon,50,src) != NULL)
{ if((fputs(tampon,cbl)) == EOF)
{ // traitement de l'erreur
printf("copie_fichier: erreur dans fputs\n");
return -1;
}
printf("%s",tampon);
resultat++;
}
if(!feof(src))
{ // traitement de l'erreur
printf("copie_fichier: erreur dans fgets\n");
return -1;
}
// on ferme les fichiers
if((fclose(src)) == EOF)
{ // traitement de l'erreur
printf("copie_fichier: erreur dans fclose\n");
return -1;
}
if((fclose(cbl)) == EOF)
{ // traitement de l'erreur
printf("copie_fichier: erreur dans fclose\n");
return -1;
}
printf("\n");
return resultat;
}
