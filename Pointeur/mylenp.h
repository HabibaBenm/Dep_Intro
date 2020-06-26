#include<stdio.h>
#include<string.h>
int mylen(char *s){
    int i;
    i=0;
    while(*s!='\0'){
        *s=*s+1;
       ++i;
    }
    return i;
}