#include <stdio.h>
#include <stdlib.h>

int main(){

    /*char lettre;
    int nbre, i, j; //I correspond aux ligne,s J aux colonnes

    printf("Bonjour. Veuillez entrer un caractere !\n");
    fflush(stdin); //Permet de vider la m�moire
    scanf("%c", &lettre);
    printf("Veuillez entrer un nombre !\n");
    fflush(stdin);
    scanf("%d", &nbre);

    for(i=1;i<=nbre;i++) {
        for(j=1;j<=nbre;j++) {
            if(i==j || (i+j)==(nbre+1)){ //Quand la ligne �quivaut � la colonne, ou que i+j vaut la valeur entr�e par l'utilisateur, on met le car.
                printf("%c",lettre);
            }else{
                printf(" "); //Sinon on met un espace vide.
            }
        }
        printf("\n");
    }*/

    char lettre1, lettre2; //Deux caract�res qui composent le carr�
    int nbre, i, j; //I : Lignes, J : Colonnes

    printf("Bonjour. Veuillez entrer un caractere. \n");
    fflush(stdin); //Permet de vider la m�moire
    scanf("%c", &lettre1);
    printf("Veuillez entrer un deuxi�me caractere. \n");
    fflush(stdin);
    scanf("%c", &lettre2);
    printf("Veuillez entrer un nombre.\n");
    fflush(stdin);
    scanf("%d", &nbre);

    for (i=1; i<=nbre; i++){
        for (j=1; j<=nbre; j++){
                if ((i==1)||(i==nbre)||(j==1)||(j==nbre)){ //Place en premi�res lignes horizonatale et verticale, et derni�res lignes horizontales et
                    printf("%c", lettre1);                  // verticales le premier caract�re. Sinon, il place le deuxi�me.
                }else{
                    printf("%c", lettre2);
                }


        }
        printf("\n");
    }
        printf("\n");
    return 0;
}
