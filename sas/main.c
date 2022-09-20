#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nom[50];
    char code[50];
    int quantite;
	float prix;
	float pttc;
	} medicament;

int N=0;
int i,j, n;
int help;
int stay=0;
medicament M[1000];



void ajouter(){
printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
for(i=0; i<n; i++){
printf("\nVoila Les infos Necessaires pour le Medicament %d: \n", i+1);
printf("Le Nom du Medicament : ");
scanf(" %s", M[N].nom);
printf("Le Code du Medicament : ");
scanf(" %s", M[N].code);
printf("Sa Quantite : ");
scanf(" %d", &M[N].quantite);
printf("Son Prix : ");
scanf(" %f", &M[N].prix);
M[N].pttc = M[N].prix+(M[N].prix*0.15);
N++;
}
}



void trialpha(){
printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
printf("\n =========>> Voila les medicaments en ordre alphabetique : \n");
    medicament aide;
    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
         if(strcmp(M[j].nom, M[j+1].nom) > 0){
            aide = M[j];
            M[j] = M[j+1];
            M[j+1] = aide;

         }
        }
        }
        for(i=0; i<N; i++){

          printf(" %s | code %s  | quantite: %d | prix %.2f DH | %.2f TTC \n", M[i].nom, M[i].code, M[i].quantite ,M[i].prix, M[i].pttc);
        }

}




void triprix(){
    medicament help;
printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
printf(" \n=========>> Voila les medicaments en ordre decroissant selon le prix : \n");
 for(i=0;i<N-1;i++){
    for(j=0;j<N-i-1;j++){
        if( M[j].prix < M[j+1].prix ){
            help=M[j];
            M[j]=M[j+1];
            M[j+1]=help;
        }
        }

        }
          for (i=0; i<N; i++){
    printf(" %s | code %s  | quantite: %d | prix %.2f DH | %.2f TTC \n", M[i].nom, M[i].code, M[i].quantite ,M[i].prix, M[i].pttc);
        }
}


void rechercherC(){
printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    int indice = 0;
    char c[50];
    printf("\nEntrez le code de ton medicament pour le trouver : ");
    scanf("%s", c);
    for(i=0; i<N; i++){
        if(strcmp(c, M[i].code) == 0){
            indice = 1;
            printf("C'est le produit %s de code %s et quantite %d et de prix %.2f DH et %.2f TTC .\n", M[i].nom, M[i].code, M[i].quantite ,M[i].prix, M[i].pttc);
            }
            }
        if   (indice == 0 ){
            printf("Le code n'existe pas\n");
        }
}



void rechercherQ(){
 printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
    int indice = 0;
    int q;
    printf("\nEntrez la quantite de ton medicament pour le trouver : ");
    scanf("%d", &q);
    for(i=0; i<N; i++){
           if(q == M[i].quantite){
            indice = 1;
            printf("C'est le produit %s de code %s et quantite %d et de prix %.2f DH et %.2f TTC .\n", M[i].nom, M[i].code, M[i].quantite ,M[i].prix, M[i].pttc);
            }
            }
        if   (indice == 0 ){
            printf("Le code n'existe pas\n");
        }
}



void supprimer(){
printf("\n * *  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n");
    int indice = 0 ;
    char sup[50];
    printf("\nEntrez le code du medicament pour l supprimer : ");
    scanf("%s", sup);
    for(i=0; i<N; i++){
        if(strcmp(sup, M[i].code) == 0){
            indice = 1;
            for(j=i; j<N; j++){
            M[i]=M[i+1];
            }
            N--;
            printf("L'operation est bien s'effectuee.\n ");
                  }}

        if   (indice == 0 ){
            printf("Le code n'existe pas\n");
               }
}



void etat(){
    for(i=0; i<N; i++){
        if(M[i].quantite < 3){
            printf(" %s de code: %s  , quantite: %d , prix: %.2f DH et %.2f TTC \n", M[i].nom, M[i].code, M[i].quantite ,M[i].prix, M[i].pttc);
        }
        else
            printf("Tout les medicaments ont la quantite superieur a 3");
    }
}


void alimenter(){
    char c[50];
    int indice = 0 ;
    int aj;
    printf("Entrez le code de ton medicament :\n ");
    scanf("%s", c);
    printf("Entrez la quantite pour l'ajouter :\n");
    scanf("%d", &aj);
    for(i=0; i<N; i++){
        if(strcmp(c, M[i].code) == 0){
             indice = 1;
             M[i].quantite = M[i].quantite + aj;
            }
            }
        if   (indice == 0 ){
            printf("Le code n'existe pas\n");
        }

}




int main()
{
int tri, rech, op;
    do{
printf("\n                                   ---- VOILA LE MENU CHER UTILISATAEUR: ----                                         \n");
printf("Choisissez ce que vous voulez cher utilisateur :\n");
printf("Tapez [1] -> Ajouter un produits: \n");
printf("Tapez [2] -> Ajouter plusieurs produits: \n");
printf("Tapez [3] -> Afficher les produits : \n");
printf("Tapez [4] -> Acheter un produit: \n");
printf("Tapez [5] -> Rechercher un produit:\n");
printf("Tapez [6] -> Etat du stock: Affichage des produits dont la quantite est inferieur a 3 :\n");
printf("Tapez [7] -> Alimenter le stock:\n");
printf("Tapez [8] -> Supprimer un produit par code:\n");
printf("Tapez [9] -> Statistique de vente:\n");
printf("Tapez [10] -> Pour quitter le programme :\n");
scanf("%d", &op);
switch(op){

case 1 : n=1;
         ajouter();
         break;

case 2 :
         printf("Tapez le nombre des medicaments pour les ajouter : \n");
         scanf("%d", &n);
         ajouter();
         break;
case 3 :
          printf("Pour un affichage selon l'ordre alphabetique Tapez [1] : \n");
          printf("Pour un affichage selon l'ordre decroissant des prix Tapez [2] : \n ");
          scanf("%d", &tri);
          switch(tri){
          case 1 : trialpha();
          break;
          case 2: triprix();
          break;
          default: printf("Pardon mais ce tri n'existe pas. \n"); break;
          } break;
case 5 :
          printf("Pour une recherche selon le code Tapez [1] : \n");
          printf("Pour une recherche selon la quantite Tapez [2] : \n ");
          scanf("%d", &rech);
          switch(rech){
          case 1 : rechercherC();
          break;
          case 2: rechercherQ();
          break;
          default: printf("Pardon mais cette recherche n'existe pas. \n"); break;
          } break;

case 6 : etat(); break;

case 7 : alimenter(); break;

case 8 : supprimer(); break;

case 10: stay = 1; break;

default: printf("Pardon mais cette option n'existe pas.\n");

    }
    }while(stay==0);


    printf("\n--------------------------------- A Bientot cher utilisateur --------------------------------- \n");


    return 0;
}
