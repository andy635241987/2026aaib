//week14-5a.cpp SOLT108_ADVANCE_007
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N<0) N = -N;
    int ans = 0;
    while (N>0) {
        ans = N%10;
        N = N / 10;
    }
    printf("%d\n", ans);
}
