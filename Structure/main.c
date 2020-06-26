#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "struct.h"

int main(){
  char nom[]="Benmessaoud";
  char prenom[]="Habiba";
  int jours=14 ;
  int mois=5 ;
  int annee=1998 ;
  Date* p = creer_Date(jours,mois,annee);
  Person* pers =creer_Person(prenom, nom, *p);
  print_person(pers);
  print_date(p);
}
