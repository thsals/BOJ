#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int k,n,m;
    scanf("%d %d %d",&k,&n,&m);
    int a;
    a = k*n - m;
    if(a<0) {
        a = 0;
    }
    printf("%d",a);
    return 0;
}
