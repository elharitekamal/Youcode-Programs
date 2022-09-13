#include <stdio.h>
#include <stdlib.h>

void signe(int A, int B){
    if  (A*B<0)
        printf("Les nombres n'ont pas le meme signe\n");
    else
        printf("Les nombres ont le meme signe\n");

}

int maximum(int A, int B){
    int max;
    if (A<B)
        max=B;
    else
        max=A;
    return max;
}

int minimum(int A, int B){
    int min;
    if (A<B)
        min=A;
    else
        min=B;
    return min;
}



int main()
{
   int A, B, min, max;
   printf("Tapez A:\n");
   scanf("%d", &A);
   printf("Tapez B:\n");
   scanf("%d", &B);
   printf(" Donc :\n");
   signe(A, B);
   min=minimum(A, B);
   max=maximum(A, B);
   printf("Le maximum est %d\n", max);
   printf("Le minimum est %d\n", min);

    return 0;
}
