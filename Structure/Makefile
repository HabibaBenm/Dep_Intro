main: main.o Date.o personne.o fiche.o afficher.o
         gcc -o main main.o Date.o personne.o fiche.o afficher.o
main.o: main.c struct.h
        gcc -c main.c
Date.o:main.c struct.h
       gcc -c Date.c
fiche.o:main.c struct.h
       gcc -c fiche.c
afficher.o:main.c struct.h
       gcc -c afficher.c
personne.o: personne.c struct.h
        gcc -c personne.c

run: main
        ./main

clean:
        rm -f main *.o
