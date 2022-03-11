double calcule_cosinus(double theta, double delta)
{ int i,signe;
double resultat,terme;
// init
i = 0;
resultat = calcule_puissance(theta,2*i)/calcule_factorielle(2*i);
printf("i=%d\t%.10f\n",i,resultat);
i++;
signe = -1;
do
{ printf("i=%d\t%.10f ",i,resultat);
terme = calcule_puissance(theta,2*i)/calcule_factorielle(2*i);
if(signe==-1)
printf("- %.10f = ",terme);
else
printf("+ %.10f = ",terme);
resultat = resultat + signe*terme;
printf("%.10f\n",resultat);
signe = signe * -1;
i++;
}
while(terme>=delta);
return resultat;
}
