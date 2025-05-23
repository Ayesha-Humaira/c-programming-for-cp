//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEFONDATE
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x, y;
        scanf("%d%d", &x, &y);

        if(x>=y) {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
    }

    return 0;
}

