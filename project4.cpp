#include <stdio.h>
//確認用
int check(int x, int a, int b, int c, int d)
{
    int check=0;
    if(a+b+c+d==x) check=6;
    else if(a+b+c-d==x) check=7;
    else if(a+b-c+d==x) check=8;
    else if(a-b+c+d==x) check=9;
    else if(a+b-c-d==x) check=10;
    else if(a-b+c-d==x) check=11;
    else if(a-b-c+d==x) check=12;
    else if(a-b-c-d==x) check=13;
    else if(a*b*c*d==x) check=14;
    else if(a/b/c/d==x && a%b==0 && (a/b)%c==0 && (a/b/c)%d==0) check=15;
    else if((a+b+c)*d==x) check=16;
    else if((a+b)*c+d==x) check=17;
    else if(a*b+c+d==x) check=18;
    else if(a*b*c+d==x) check=19;
    else if((a*b+c)*d==x) check=20;
    else if((a+b)*c*d==x) check=21;
    else if(a*b*c-d==x) check=22;
    else if((a*b-c)*d==x) check=23;
    else if((a-b)*c*d==x) check=24;
    else if(a*b-c-d==x) check=25;
    else if((a-b)*c-d==x) check=26;
    else if((a-b-c)*d==x) check=27;
    else if(a/b+c+d==x && a%b==0) check=28;
    else if((a+b)/c+d==x && (a+b)%c==0) check=29;
    else if((a+b+c)/d==x && (a+b+c)%d==0) check=30;
    else if(a/b/c+d==x && a%b==0 && (a/b)%c==0) check=31;
    else if((a/b+c)/d==x && a%b==0 && (a/b+c)%d==0) check=32;
    else if((a+b)/c/d==x && (a+b)%c==0 && ((a+b)/c)%d==0) check=33;
    else if(a/b-c-d==x && a%b==0) check=34;
    else if((a-b)/c-d==x && (a-b)%c==0) check=35;
    else if((a-b-c)/d==x && (a-b-c)%d==0) check=36;
    else if(a/b/c-d==x && a%b==0 && (a/b)%c==0) check=37;
    else if((a/b-c)/d==x && a%b==0 && (a/b-c)%d==0) check=38;
    else if((a-b)/c/d==x && (a-b)%c==0 && ((a-b)/c)%d==0) check=39;
    else if(a/b*c*d==x && a%b==0) check=40;
    else if(a*b/c*d==x && (a*b)%c==0) check=41;
    else if(a*b*c/d==x && (a*b*c)%d==0) check=42;
    else if(a*b/c/d==x && (a*b)%c==0 && (a*b/c)%d==0) check=43;
    else if(a/b*c/d==x && a%b==0 && (a/b*c)%d==0) check=44;
    else if(a/b/c*d==x && a%b==0 && (a/b)%c==0) check=45;
    else if((a+b-c)*d==x) check=46;
    else if((a-b)*c+d==x) check=47;
    else if(a*b-c+d==x) check=48;
    else if((a+b)*c-d==x) check=49;
    else if(a*b+c-d==x) check=50;
    else if((a-b+c)*d==x) check=51;
    else if((a-b)*c/d==x && ((a-b)*c)%d==0) check=52;
    else if(a*b/c-d==x && (a*b)%c==0) check=53;
    else if((a/b-c)*d==x && a%b==0) check=54;
    else if((a-b)/c*d==x && (a-b)%c==0) check=55;
    else if(a/b*c-d==x && a%b==0) check=56;
    else if((a*b-c)/d==x && (a*b-c)%d==0) check=57;
    else if(a*b/c+d==x && (a*b)%c==0) check=58;
    else if((a/b+c)*d==x && a%b==0) check=59;
    else if((a+b)/c*d==x && (a+b)%c==0) check=60;
    else if((a*b+c)/d==x && (a*b+c)%d==0) check=61;
    else if((a+b)*c/d==x && ((a+b)*c)%d==0) check=62;
    else if(a/b*c+d==x && a%b==0) check=63;
    else if((a+b)/c-d==x && (a+b)%c==0) check=64;
    else if((a-b)/c+d==x && (a-b)%c==0) check=65;
    else if(a/b-c+d==x && a%b==0) check=66;
    else if((a-b+c)/d==x && (a-b+c)%d==0) check=67;
    else if((a+b-c)/d==x && (a+b-c)%d==0) check=68;
    else if(a/b+c-d==x && a%b==0) check=69;
    
    return check;
}

int main(void)
{
    int n, a, b, c, d;
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    int fin=check(n,a,b,c,d);
    if(fin==0) printf("NOT OK");
    else printf("OK, %d", fin);
    return 0;
}