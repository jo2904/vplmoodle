#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    //on recup tt les scanf 
    char argument[10];
    scanf("%s", &argument);

    //on envoie les argv puis on lance le py et recup le résultat
    char  command[100] = "python3 -c 'import sys;print(abs(int(sys.argv[1])));' ";
    strcat(command, argument);
    strcat(command, " > result.txt");
    
    int cr = system(command);
    if( cr != 0 ){
        printf("echec du lancement du programme");
        return -1;
    }
    
    //on print le result en c
    FILE* resultxt = NULL;
    resultxt = fopen("result.txt", "r");
    char tempchar = fgetc(resultxt);
    while (tempchar != EOF)
    {
        printf ("%c", tempchar);
        tempchar = fgetc(resultxt);
    }
    fclose(resultxt);

    return 0;
}