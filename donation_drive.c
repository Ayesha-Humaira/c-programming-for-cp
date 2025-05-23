//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/DONDRIVE
#include <stdio.h>

int main()
{
    int t;
    scanf("%d\n", &t);

    for(int i=1; i<=t; i++) {
        int n,x;
        scanf("%d%d", &n, &x);
        int rem= n-x;
        printf("%d\n", rem);
    }

    return 0;
}
