#include <stdio.h>

int check(int x, int a, int b, int c, int d)
{
    int check=0;
    if(a+b+c+d==x) check=1;
    else if(a+b+c-d==x) check=1;
    else if(a+b-c+d==x) check=1;
    else if(a-b+c+d==x) check=1;
    else if(b-a+c+d==x) check=1;
    else if(a+b-c-d==x) check=1;
    else if(c+d-a-b==x) check=1;
    else if(a+d-b-c==x) check=1;
    else if(d+b-a-c==x) check=1;
    else if(c+b-a-d==x) check=1;
    else if(a+c-b-d==x) check=1;
    else if(a-b-c-d==x) check=1;
    else if(b-c-d-a==x) check=1;
    else if(c-d-a-b==x) check=1;
    else if(d-a-b-c==x) check=1;
    return check;
}

int main(void)
{
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int fin=check(n,a,b,c,d);
    if(fin==1) printf("OK");
    else printf("NOT OK");
    return 0;
}