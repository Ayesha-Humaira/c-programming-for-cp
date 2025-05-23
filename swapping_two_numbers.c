//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C
#include <stdio.h>

int main()
{
    int x,y;

    for(int i=1; ; i++) {
        scanf("%d %d", &x, &y);
        if(y<x) {
            printf("%d %d\n", y, x);
        }

        else if(x==0 && y==0) {
            break;
        }

        else {
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}
