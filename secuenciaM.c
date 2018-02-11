/*Instituto Politecnico Nacional
Escuela Superior de Computo
Autor: Eduardo Perez Gomez
9/Febrero/2018
Suecuencias Minimas (main)*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#include <ctype.h>
#include <string.h>
#include <termios.h>

void print_usage() {
    printf("Usage: secM -n num -s sec(ej. 1,2,3,4)\n");
}

int main(int argc, char *argv[]) {
    int option = 0, lenS, x=0;
    int secMin = -1, n =-1;
    char* secA = NULL;
    int* secMi;

    while ((option = getopt(argc, argv,"cn:s:")) != -1) {
        switch (option) {
            case 'c' : secMin = 0;
                break;
            case 'n' : n = atoi(optarg); 
                break;
            case 's' : 
            	lenS = strlen(optarg);
            	secMi = malloc(lenS * sizeof(int));

            	for (int i = 0; i < lenS; i=i+2){
            		if(strcmp(optarg+i, ",") != 0){
            			secMi[x] = atoi(optarg+i);
            			x++;
            		}
            	}
            	secA = optarg;
                break;
            default: print_usage(); 
                exit(EXIT_FAILURE);
        }
    }
    if (n == -1 || secA == NULL) {
        print_usage();
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < x; i++){
        printf("sec[%d]: %d ", i,secMi[i]);
    }
    
    // Calculate the secMin
    if (secMin == 0) {
        printf("\nn: %d\n", n);
        printf("secuencia: %s\n",secA);
    }

    return 0;
}