//https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C
#include <stdio.h>

int main()
{
    int a,b;
    char op;

    for(int i=1; ;i++) {
        scanf("%d %c %d", &a, &op, &b);

        if(op=='+') {
            printf("%d\n", a+b);
        }
        else if(op == '-') {
            printf("%d\n", a-b);
        }

        else if(op == '*') {
            printf("%d\n", a*b);
        }

        else if(op== '/') {
            printf("%d\n", a/b);
        }

        else if(op== '?'){
            break;
        }
    }

    return 0;
}
