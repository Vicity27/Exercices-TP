#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	printf("Entrez un charactere : \n");
	scanf_s("%c" & a);
	if (a >= "A" && a >= "Z") {
		printf("Le charactere est une majuscule");
	}
	if (a >= "a" && a <= "z") {
		printf("Le charactere est une minuscule");
	}
	if (a >= "0" && a <= "9") {
		printf("Le charactere est un chiffre");
	}
}