#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "struct.h"

 List *insert(Date *date, List *list) {
  List* p = (List*) malloc(sizeof(List));
  p->date =date;
  p->list =list;
  return p;
}
void print_list(List *list){
  
}