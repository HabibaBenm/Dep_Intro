#include<stdio.h>
#ifndef DATE
#define DATE

typedef struct _Date {
  int jours;
  int mois;
  int annee;
} Date;

typedef struct _List {
  Date* date;
  struct _List* list;
} List;


typedef struct _Person {
  char* prenom;
   char* nom;
   Date date_naissance;
} Person;

Date* creer_Date(int jours, int mois, int annee);
void print_date(Date* p);
Person* creer_Person(char* prenom, char* nom,Date date_naissance);
void print_person(Person* p);

#endif
