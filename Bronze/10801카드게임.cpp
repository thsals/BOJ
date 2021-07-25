#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[10],b[10],aw=0,bw=0;
    int i;
    for(i=0;i<10;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++) {
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++) {
        if(a[i]> b[i]) {
            aw++;
        }
        if(a[i]<b[i]) {
            bw++;
        }
    }
    if(aw == bw) {
        printf("D");
    }
    else if (aw > bw ){
        printf("A");
    }
    else {
        printf("B");
    }
    return 0;
}
