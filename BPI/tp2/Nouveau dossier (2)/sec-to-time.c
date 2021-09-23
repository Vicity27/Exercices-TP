#include <stdio.h>
#include <stdlib.h>

int secondes (int s){
  int h,m;
  
  h = s / 3600;
  s = s - (h * 3600);
  m = s / 60 ;
  s = s - (m * 60);
  // on a maintenant h qui est en heures , m en minutes , et s en  secondes //
  return EXIT_SUCCESS;
}

int main(void) {
  
  int h,m,s;
  printf("entrez le temps en secondes : ");
  scanf("%d", &s);
  h = s / 3600;
  s = s - (h * 3600);
  m = s / 60 ;
  s = s - (m * 60);
  
  printf ("il est %02d %02d %02d ", h, m ,s );
  return EXIT_SUCCESS;
}
  
  


  
  
