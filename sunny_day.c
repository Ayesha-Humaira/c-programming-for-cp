//https://www.codechef.com/problems/SUNNYDAY
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1;i<=t;i++) {
        int x;
        scanf("%d", &x);
        if(x>24) {
            printf("Yes\n");
        }

        else{
            printf("No\n");
        }
    }

    return 0;
}
