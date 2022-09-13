#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, S, i;
    for(i=1; i<=8; i++){
            printf("Tapez le nombre :\n");
            scanf("%d", &N);
        if(N>0)
            S=S+N;
        else
            break;
        }
        printf("La somme est %d ", S);

}
