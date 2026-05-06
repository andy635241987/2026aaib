// week11-2a.cpp SOLT106 ADVANCE 001
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    //
    while ( N>0 ) {
        printf("%d", N%10);
        N=N/10;
    }
}
