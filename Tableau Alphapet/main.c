#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char E[6]={'A', 'B', 'C', 'D', 'E', 'F'};
    for(i=0; i<6; i++){
        printf(" E[%d]=%c\n", i, E[i]);
    }
    return 0;
}
