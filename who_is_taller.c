//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/TALLER
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int a, b;
        scanf("%d%d", &a, &b);

        if(a>b) {
            printf("A\n");
        }
        else {
            printf("B\n");
        }
    }

    return 0;
}

