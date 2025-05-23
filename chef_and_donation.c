//https://www.codechef.com/problems/DNATION
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++) {
        int x,y;
        scanf("%d%d", &x, &y);
        if(y>x){
            int diff= y-x;
            printf("%d\n", diff);

        }
    }
