#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=300,b=60,c=10;
    int t;
    int na=0,nb=0,nc=0;
    scanf("%d",&t);

    na = t/a;
    t=t%a;

    nb = t/b;
    t=t%b;
    nc=t/c;
    t=t%c;
    if(t % 10 != 0) {
        printf("-1");
    }
    else {
        printf("%d %d %d",na,nb,nc);
    }

    return 0;
}
