#include<stdio.h>


int main (void) {
  char nombre[32];
  printf("Cuál es tu nombre? ");
  scanf("%s", &nombre);
  printf("Hola a todos papus.com\n");
  printf("Hola a %s, a ti también.\n", nombre);

  return(0);
}



