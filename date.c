#include <stdio.h>
#include <stdlib.h>

 void affiche_mois(t_mois m)
{ switch(m),
{ case jan:
printf("janvier");
break;
case fev:
printf("fevrier");
break;
case mars:
printf("mars");
break;
case avr:
printf("avril");
break;
case mai:
printf("mai");
break;
case juin:
printf("juin");
break;
case juil:
printf("juillet");
break;
case aout:
printf("aout");
break;
case sept:
printf("septembre");
break;
case oct:
printf("octobre");
break;
case nov:
printf("novembre");
break;
case dec:
printf("decembre");
break;
}
}

