//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CANDIVIDE
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int n;
        scanf("%d", &n);

        if(n%3==0) {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
    }

    return 0;
}
