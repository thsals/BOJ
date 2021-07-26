#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,n,a[5],cnt=0;
    scanf("%d",&n);
    for(i=0;i<5;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++) {
        if(a[i] == n) {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
