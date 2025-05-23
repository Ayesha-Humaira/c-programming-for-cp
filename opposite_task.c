//https://lightoj.com/problem/opposite-task
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++) {
        int n;
        scanf("%d",&n);

        if(n<=10) {
            printf("%d 0\n", n);
        }

        else if(n>10){
            int y;
            printf("10 %d\n", n-10 );
        }
    }

    return 0;
}
