#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[]){

    if (argc <= 1){

        printf("\x1B[31mUsage: ./pwnme <username>\x1B[0m\n");

        exit(0);
    }

    printf("Welcome to PwnMe, created by Alex PWN");

    char *name = malloc(128);
    char *command = malloc(128);

    strcpy(command,"date");

    strcpy(name,argv[1]);

    printf("\x1B[36mUser: %s is executing command \"%s\"\n",name,command);
    printf("\x1B[0m");

    system(command);

    return 0;
}


// gcc -o pwnme pwnme.c -fno-stack-protector
