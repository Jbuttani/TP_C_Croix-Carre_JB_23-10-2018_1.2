#include <stdio.h>
#include <stdlib.h>

int main(){

    /*char lettre;
    int nbre, i, j; //I correspond aux ligne,s J aux colonnes

    printf("Bonjour. Veuillez entrer un caractere !\n");
    fflush(stdin); //Permet de vider la mémoire
    scanf("%c", &lettre);
    printf("Veuillez entrer un nombre !\n");
    fflush(stdin);
    scanf("%d", &nbre);

    for(i=1;i<=nbre;i++) {
        for(j=1;j<=nbre;j++) {
            if(i==j || (i+j)==(nbre+1)){ //Quand la ligne équivaut à la colonne, ou que i+j vaut la valeur entrée par l'utilisateur, on met le car.
                printf("%c",lettre);
            }else{
                printf(" "); //Sinon on met un espace vide.
            }
        }
        printf("\n");
    }*/

    char lettre1, lettre2; //Deux caractères qui composent le carré
    int nbre, i, j; //I : Lignes, J : Colonnes

    printf("Bonjour. Veuillez entrer un caractere. \n");
    fflush(stdin); //Permet de vider la mémoire
    scanf("%c", &lettre1);
    printf("Veuillez entrer un deuxième caractere. \n");
    fflush(stdin);
    scanf("%c", &lettre2);
    printf("Veuillez entrer un nombre.\n");
    fflush(stdin);
    scanf("%d", &nbre);

    for (i=1; i<=nbre; i++){
        for (j=1; j<=nbre; j++){
                if ((i==1)||(i==nbre)||(j==1)||(j==nbre)){ //Place en premières lignes horizonatale et verticale, et dernières lignes horizontales et
                    printf("%c", lettre1);                  // verticales le premier caractère. Sinon, il place le deuxième.
                }else{
                    printf("%c", lettre2);
                }


        }
        printf("\n");
    }
        printf("\n");
    return 0;
}
