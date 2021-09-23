#include <stdio.h>
#include <stdlib.h>

int main (void){
  printf("entrez le nbre d'heure de minutes et de seconde :");
  int h,m,s,total;
  scanf("%d%d%d",&h,&m,&s);
  h=h*3600;
  m=m*60;
  total=h+m+s ;
  printf("il y a %d secondes",total);
  
}

int temps(int h , int m ,int s){
  s = s + (h*3600);
  s = s +(m*60);
    
  return s ;
}
  
