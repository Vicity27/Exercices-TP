#include <stdio.h>
#include <stdlib.h>

int  main (void){
  printf (" Entree quatre valeurs : ");
  double a,b,c,d,moyenne;
  scanf ("%lf%lf%lf%lf",&a,&b,&c,&d);
  moyenne = (a+b+c+d)/4 ;
printf("La moyenne est %lf .\n",moyenne);
}
