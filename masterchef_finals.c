//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TOP10
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x;
        scanf("%d", &x);

        if(x<=10) {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
    }

    return 0;
}

