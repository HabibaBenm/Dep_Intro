#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void print_person(Person* p){
  printf("Nom: %s\nPrenom: %s \nDate de naissane: :\n",p->prenom,p->nom);
}