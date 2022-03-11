int ecris_chaine()
{ int resultat=0;
// on saisit la chaine
char chaine[10];
printf("entrez la chaine : ");
scanf("%s",chaine);
// on ouvre le fichier
FILE *fp;
if((fp = fopen("donnees.txt", "w")) == NULL)
{ //traitement en cas d'erreur
printf("ecris_chaine: erreur dans fopen\n");
return -1;
}
// on écrit la chaîne
while(chaine[resultat] !='\0')
{ if((fputc(chaine[resultat],fp)) == EOF)
{ // traitement de l'erreur
printf("ecris_chaine: erreur dans fputc\n");
return -1;
}
resultat++;
}
// on ferme le fichier
if((fclose(fp)) == EOF)
{ // traitement de l'erreur
printf("ecris_chaine: erreur dans fclose\n");
return -1;
}
return resultat;
}

