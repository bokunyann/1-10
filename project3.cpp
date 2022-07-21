#include <stdio.h>

int check(int x, int a, int b, int c, int d)
{
    int check=0;
    if(a+b+c+d==x) check=1;
    else if(a+b+c-d==x) check=1;
    else if(a+b-c+d==x) check=1;
    else if(a-b+c+d==x) check=1;
    else if(a+b-c-d==x) check=1;
    else if(a-b+c-d==x) check=1;
    else if(a-b-c+d==x) check=1;
    else if(a-b-c-d==x) check=1;
    else if(a*b*c*d==x) check=1;
    else if(a/b/c/d==x && a%b==0 && (a/b)%c==0 && (a/b/c)%d==0) check=1;
    else if((a+b+c)*d==x) check=1;
    else if((a+b)*c+d==x) check=1;
    else if(a*b+c+d==x) check=1;
    else if(a*b*c+d==x) check=1;
    else if((a*b+c)*d==x) check=1;
    else if((a+b)*c*d==x) check=1;
    else if(a*b*c-d==x) check=1;
    else if((a*b-c)*d==x) check=1;
    else if((a-b)*c*d==x) check=1;
    else if(a*b-c-d==x) check=1;
    else if((a-b)*c-d==x) check=1;
    else if((a-b-c)*d==x) check=1;
    else if(a/b+c+d==x && a%b==0) check=1;
    else if((a+b)/c+d==x && (a+b)%c==0) check=1;
    else if((a+b+c)/d==x && (a+b+c)%d==0) check=1;
    else if(a/b/c+d==x && a%b==0 && (a/b)%c==0) check=1;
    else if((a/b+c)/d==x && a%b==0 && (a/b+c)%d==0) check=1;
    else if((a+b)/c/d==x && (a+b)%c==0 && ((a+b)/c)%d==0) check=1;
    else if(a/b-c-d==x && a%b==0) check=1;
    else if((a-b)/c-d==x && (a-b)%c==0) check=1;
    else if((a-b-c)/d==x && (a-b-c)%d==0) check=1;
    else if(a/b/c-d==x && a%b==0 && (a/b)%c==0) check=1;
    else if((a/b-c)/d==x && a%b==0 && (a/b-c)%d==0) check=1;
    else if((a-b)/c/d==x && (a-b)%c==0 && ((a-b)/c)%d==0) check=1;
    else if(a/b*c*d==x && a%b==0) check=1;
    else if(a*b/c*d==x && (a*b)%c==0) check=1;
    else if(a*b*c/d==x && (a*b*c)%d==0) check=1;
    else if(a*b/c/d==x && (a*b)%c==0 && (a*b/c)%d==0) check=1;
    else if(a/b*c/d==x && a%b==0 && (a/b*c)%d==0) check=1;
    else if(a/b/c*d==x && a%b==0 && (a/b)%c==0) check=1;
    else if((a+b-c)*d==x) check=1;
    else if((a-b)*c+d==x) check=1;
    else if(a*b-c+d==x) check=1;
    else if((a+b)*c-d==x) check=1;
    else if(a*b+c-d==x) check=1;
    else if((a-b+c)*d==x) check=1;
    else if((a-b)*c/d==x && ((a-b)*c)%d==0) check=1;
    else if(a*b/c-d==x && (a*b)%c==0) check=1;
    else if((a/b-c)*d==x && a%b==0) check=1;
    else if((a-b)/c*d==x && (a-b)%c==0) check=1;
    else if(a/b*c-d==x && a%b==0) check=1;
    else if((a*b-c)/d==x && (a*b-c)%d==0) check=1;
    else if(a*b/c+d==x && (a*b)%c==0) check=1;
    else if((a/b+c)*d==x && a%b==0) check=1;
    else if((a+b)/c*d==x && (a+b)%c==0) check=1;
    else if((a*b+c)/d==x && (a*b+c)%d==0) check=1;
    else if((a+b)*c/d==x && ((a+b)*c)%d==0) check=1;
    else if(a/b*c+d==x && a%b==0) check=1;
    else if((a+b)/c-d==x && (a+b)%c==0) check=1;
    else if((a-b)/c+d==x && (a-b)%c==0) check=1;
    else if(a/b-c+d==x && a%b==0) check=1;
    else if((a-b+c)/d==x && (a-b+c)%d==0) check=1;
    else if((a+b-c)/d==x && (a+b-c)%d==0) check=1;
    else if(a/b+c-d==x && a%b==0) check=1;
    
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