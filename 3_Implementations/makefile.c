all:pd

pdm:main.o student management system.o
         gcc -Wall -o pd main.o student management system.o

main.o:main.c
         gcc -c -Wall main.c

student management system.o:student management system.c
         gcc -c -Wall student management system.c

