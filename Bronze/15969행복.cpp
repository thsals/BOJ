#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,n,imsi=0;
    int a[1010];
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n-1;j++) {
            if(a[j] < a[j+1]) {
                imsi = a[j];
                a[j] = a[j+1];
                a[j+1] = imsi;
            }
        }
    }
    printf("%d",a[0]-a[n-1]);
    return 0;
}

