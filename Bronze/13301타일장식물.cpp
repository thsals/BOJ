#include <iostream>
#include <stdio.h>
using namespace std;
long long arr[80]={1,1};
void hamsu() {
    int  a=1,i;
    for(i=2;i<=80;i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    hamsu();
    printf("%lld",2*arr[n-1] + 2*arr[n]);
    return 0;
}
