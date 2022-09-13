#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char nom[50], ville[50], pren[50];
    int  num, age, budg, phone, stay;
    printf("          *** Soyez Bienvenue Chez Notre Agence ***          \n");
    printf("Ton Prenom s'il vous plait :\n");
    scanf(" %s", &pren);
    printf("Ton Nom s'il vous plait :\n");
    scanf(" %s", &nom);
    printf("Ta Ville :\n");
    scanf(" %s", &ville);
    printf("Ton Numero De Telephone :\n");
    printf(" +212");
    scanf(" %d", &num);
    printf("Ton Age : \n");
    scanf(" %d", &age);
do{
    if ( age >= 18){
        printf("C'est quoi Ton Budget Maximal ? \n");
        printf("De 600dh a 1000dh : Tapez 1 :\n");
        printf("De 1000dh a 2500dh : Tapez 2 :\n");
        printf("De 2500dh a 5000dh : Tapez 3 :\n");
        printf("Plus de 5000dh: Tapez 4 : \n");
        scanf("%d", &budg);
        switch(budg){
            case 1: printf("Voila Nos Promotions Actuelles Pour ce Budget : Samsung A10   //  IPhone 6s  // Infinix Hot 10 // Huawei Y6 :\n");
                    printf(" Samsung A10 -- 700DH : Tapez 1 pour Valider Ta commande :\n");
                    printf(" IPhone 6s -- 950DH : Tapez 2 pour Valider Ta commande :\n");
                    printf(" Infinix Hot 10 -- 1000DH : Tapez 3 pour Valider Ta commande :\n");
                    printf(" Huawei Y6 -- 800DH : Tapez 4 pour Valider Ta commande :\n");
                    scanf(" %d", &phone);
                    switch(phone){
                        case 1: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Samsung A10 .\n", pren, nom, ville, num);
                        break;
                        case 2: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le IPhone 6s .\n", pren, nom, ville, num);
                        break;
                        case 3: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Infinix Hot 10 .\n", pren, nom, ville, num);
                        break;
                        case 4: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Huawei Y6 .\n", pren, nom, ville, num);
                        break;
                        default: ("Merci de bien lire les commandes et redemarrer le Programme pour ressayer une autre fois\n");
                        }
                        break;
            case 2: printf(" Voila Nos Promotions Actuelles Pour ce Budget : Iphone 7   //  Redmi 9t  // Huawei 9s // Iphone 8 : \n");
                    printf(" Iphone 7 -- 1200DH : Tapez 1 pour Valider Ta commande :\n");
                    printf(" Redmi 9t -- 1950DH : Tapez 2 pour Valider Ta commande :\n");
                    printf(" Huawei 9s -- 2000DH : Tapez 3 pour Valider Ta commande :\n");
                    printf(" Iphone 8 -- 2300DH : Tapez 4 pour Valider Ta commande :\n");
                    scanf(" %d", &phone);
                    switch(phone){
                        case 1: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone 7 . \n", pren, nom, ville, num);
                        break;
                        case 2: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Redmi 9t . \n", pren, nom, ville, num);
                        break;
                        case 3: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Huawei 9s .\n", pren, nom, ville, num);
                        break;
                        case 4: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone 8 .\n", pren, nom, ville, num);
                        break;
                        default: ("Merci de bien lire les commandes et redemarrer le Programme pour ressayer une autre fois\n");
                        }
                        break;
            case 3: printf(" Voila Nos Promotions Actuelles Pour ce Budget : Iphone X   //  Iphone XR  // Redmi note 10 // Iphone 11 .: \n");
                    printf(" Iphone X -- 2500DH : Tapez 1 pour Valider Ta commande :\n");
                    printf(" Iphone XR -- 3800DH : Tapez 2 pour Valider Ta commande :\n");
                    printf(" Redmi note 10 -- 3000DH : Tapez 3 pour Valider Ta commande :\n");
                    printf(" Iphone 11 -- 4500DH : Tapez 4 pour Valider Ta commande :\n");
                    scanf(" %d", &phone);
                    switch(phone){
                        case 1: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone X .\n", pren, nom, ville, num);
                        break;
                        case 2: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone XR .\n", pren, nom, ville, num);
                        break;
                        case 3: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Redmi note . 10 \n", pren, nom, ville, num);
                        break;
                        case 4: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone 11 .\n", pren, nom, ville, num);
                        break;
                        default: ("Merci de bien lire les commandes et redemarrer le Programme pour ressayer une autre fois . \n");
                        } break;
            case 4: printf(" Voila Nos Promotions Actuelles Pour ce Budget : Iphone 11 pro   //  Sumsung Ultra 11  // Iphone 13 // Iphone 13 pro .:\n");
                    printf(" phone 11 pro -- 6000DH : Tapez 1 pour Valider Ta commande :\n");
                    printf(" Sumsung Ultra 11 -- 7200DH : Tapez 2 pour Valider Ta commande :\n");
                    printf(" Iphone 13 -- 7800DH : Tapez 3 pour Valider Ta commande :\n");
                    printf(" Iphone 13 pro -- 9000DH : Tapez 4 pour Valider Ta commande :\n");
                    scanf(" %d", &phone);
                    switch(phone){
                        case 1: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le phone 11 pro .\n", pren, nom, ville, num);
                        break;
                        case 2: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Sumsung Ultra 11 .\n", pren, nom, ville, num);
                        break;
                        case 3: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone 13 . \n", pren, nom, ville, num);
                        break;
                        case 4: printf(" Donc C'est Monsieur %s %s de %s , on vous appelera sur +212%d pour confirmer ta commande pour le Iphone 13 pro . \n", pren, nom, ville, num);
                        break;
                        default: ("Merci de bien lire les commandes et redemarrer le Programme pour ressayer une autre fois \n");
                        }
                        break;
            default: ("Merci de bien lire les commandes et redemarrer le Programme pour ressayer une autre fois\n");
            }
 }
    else{
       printf("Desole, mais Tu es encore Petit(e)\n");}


       printf("Tapez 1 pour continuer ou un autre nombre pour quitter \n");
       scanf("%d", &stay);

}while(stay == 1);

          printf("           ***** A La Prochaine *****     ");


      return 0;
}
