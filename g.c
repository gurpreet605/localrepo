#include <stdio.h>
int main() 
{
    int i;
    // program in c to know the functioning of the break statement 
    for(i=1; i<=100; i++){
        if (i==34)
        continue;
        printf("%d\n", i);
    }
    return 0;
}
