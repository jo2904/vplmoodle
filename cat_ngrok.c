#include <stdio.h>
#include <stdlib.h>

long tailleFichier(char * chemin){
  FILE * fichier = NULL;//def du pointeur fichier
  fichier = fopen(chemin, "r"); // on ouvre le fichier
  fseek(fichier, 0, SEEK_END); //on place le curseur à la fin du fichier
  long taille = ftell(fichier); //on recup la position du pointeur
  fclose(fichier);//on ferme le ichier
  return taille;
}

void afficherTXT(char * chemin){
  char temp; //on init une variable temp
  FILE * fichier = NULL; // on def un pointeur fichier
  fichier = fopen (chemin, "r"); //on ouvre le fichier dans le pointeur
  if (fichier == NULL){ // si fichier pas ouvert
    printf("Absence du fichier\n");//on affiche erreure
    exit(EXIT_FAILURE); //on ferme le programme
  }
  long taille = tailleFichier(chemin);//on recup la taille du fichier

  for(int i = 0; i < taille; i++){
    fscanf(fichier, "%c", &temp); //on recup le i eme caractere du fichier
    printf("%c", temp);//on l'affiche
  }
  fclose(fichier);
}


int main(){

	char * path[50];
	scanf("%s", &path);
	afficherTXT(char);
	
	return 0;
	}