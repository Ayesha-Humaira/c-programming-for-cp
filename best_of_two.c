//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/BESTOFTWO
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x,y;
        scanf("%d%d", &x, &y);

        if(x>y) {
            printf("%d\n", x);
        }
        else {
            printf("%d\n", y);
        }
    }

    return 0;
}

