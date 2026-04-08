// week07-3c.cpp SOLT107_Base_013
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    // 1 => 0
    // 2 => 1
    // 3 => 2
    // 4 => 3
    printf("%d", (a-1) % 7 );
}
