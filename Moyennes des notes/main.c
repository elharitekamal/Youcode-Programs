#include <stdio.h>
#include <stdlib.h>

int main()
{   int i;
    float S=0;
    float note[5];
    for(i=1; i<6; i++){
        printf("Taper la note d'eleve %d :\n", i);
        scanf("%f", &note[i]);
        S = S+note[i];
        }
        printf("Donc la moyenne des eleves est %.2f", S/5);
    return 0;
}
