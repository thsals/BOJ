#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;


int b[20010];
bool cmp(int l,int r) {
    if(l<r) {
        return true;
    }
    else{
    return false;
    }
}
int main()
{

    int i,n,res = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&b[i]);
    }

    sort(b+0,b+n,cmp);


    printf("%d",b[(n-1)/2]);
    return 0;
}
