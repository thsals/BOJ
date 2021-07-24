#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int r,int l) {
    if(r<l) {
        return true;
    }
    return false;
}
int arr[500001];
int main()
{
    int n,i;

    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n,cmp);
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
