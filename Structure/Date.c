#include<stdlib.h>
#include "struct.h"

Date* creer_Date(int jours, int mois, int annee) {
  Date* res = (Date*) malloc(sizeof(Date));
  res->jours = jours;
  res->mois = mois;
  res->annee=annee;
  return res;
}
