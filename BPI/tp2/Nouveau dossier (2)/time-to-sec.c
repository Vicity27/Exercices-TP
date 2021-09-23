#include <stdio.h>
#include <stdlib.h>
int temps(int h , int m ,int s){
  s = s + (h*3600);
  s = s +(m*60);
    
  return s ;
}

int main (void){
  printf("entrez le nbre d'heure ,de minutes et de seconde :");
  int h,m,s;
  scanf("%d%d%d", &h,&m,&s);
  s = temps (h , m ,s);
  printf( "il est %d " , s);
  return EXIT_SUCCESS;  
}

