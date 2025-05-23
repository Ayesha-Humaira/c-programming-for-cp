//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/KITCHENTIME
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        int n= y-x;
        printf("%d\n", n);
    }

    return 0;
}

