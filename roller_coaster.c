
//https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MINHEIGHT
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x,h;
        scanf("%d%d", &x, &h);

        if(x>=h) {
            printf("YES\n");
        }

        else {
            printf("NO\n");
        }
    }

    return 0;
}
