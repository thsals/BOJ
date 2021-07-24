#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,n,cnt=1,big;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    big = a[n-1];

    for(j=n;j>0;j--) {
        if(big<a[j-1]) {
            cnt++;
            big = a[j-1];
        }
    }
    printf("%d",cnt);
    return 0;
}
