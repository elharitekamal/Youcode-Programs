#include <stdio.h>
#include <stdlib.h>

typedef struct {
int jour;
int mois;
int annee;
}datenaiss;

typedef struct {
char nom[20];
char prenom[20];
int age;
datenaiss date;
}personne;



int main()
{
int i, n, M, cetann, j, s=0, help, op;
char max[20], min[20];
personne T[100];
printf("l'annee actuelle s'il vous plait :\n");
scanf("%d", &cetann);
printf("Tapez le nombre des eleves : \n");
scanf("%d", &n);
for(i=0; i<n; i++){
printf("Les infos d'eleves %d: \n", i+1);
printf("le prenom:\n");
scanf("%s", T[i].prenom);
printf("le nom : \n");
scanf("%s", T[i].nom);
printf("La date de naissance :\n");
printf("jour :\n");
scanf("%d", &T[i].date.jour);
printf("le mois : \n");
scanf("%d", &T[i].date.mois);
printf("Annee : \n");
scanf("%d", &T[i].date.annee);
}
for(i=0; i<n; i++){
        T[i].age = cetann-(T[i].date.annee);
        printf("Les infos d'eleve %d: \n", i+1);
        printf("le prenom est %s:\n", T[i].prenom);
        printf("Le nom : %s\n", T[i].nom);
        printf("La date de naissance : ");
        printf("%d / %d / %d \n", T[i].date.jour, T[i].date.mois, T[i].date.annee);
        printf("Donc son age est : %d\n", T[i].age);
        s = s + T[i].age;
}
for (i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(T[i].age>T[j].age){
                help = T[i].age;
                T[i].age = T[j].age;
                T[j].age = help;}
        }
        }
        printf("Pour le plus grand Tapez '2' et pour le plus petit '3' et pour la moyenne '1' :\n");
        scanf("%d", &op);
switch(op){
case  1  :  printf("La moyenne age est %d \n", s/n); break;
case  2      :  printf(" le plus petit est %s %s\n", T[0].prenom, T[0].nom); break;
case  3     :  printf(" le plus grand est  %s %s\n", T[n-1].prenom, T[n-1].nom); break;
default:      printf("Le choix est invalide"); break;

}
return 0;

}
