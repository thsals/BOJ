#include <iostream>
#include <stdio.h>
using namespace std;
int c[100001] = {0,},b[100001],d[100001] = {0,};

int main()
{
    int n,k,i,big=0;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++) {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=n;i++) {
        c[i] = c[i-1]+b[i];
    }
    for(i=1;i<=n-(k-1);i++) {
        d[i] = c[i+k-1] - c[(i+k-1) - k];
    }
    big = d[1];
    for(i=1;i<=n-(k-1);i++) {
        if(big < d[i]) {
            big = d[i];
        }

    }
    printf("%d",big);
    return 0;
}
