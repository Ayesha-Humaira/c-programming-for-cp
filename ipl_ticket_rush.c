//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/IPLTRSH
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x,y;
        scanf("%d%d", &x, &y);
        if(x>y) {
            printf("%d\n", x-y);
        }

        else if(x<y) {
            printf("0\n");
        }

        else if(x==y) {
            printf("0\n");
        }
    }

    return 0;
}

