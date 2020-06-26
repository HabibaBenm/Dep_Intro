#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

void print_date(Date* p){
  printf(" %d/%d/%d\n",p->jours,p->mois,p->annee);
}