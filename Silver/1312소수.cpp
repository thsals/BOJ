#include <iostream>
#include <stdio.h>
using namespace std;
int arr[1000001];
int main()
{
    int a,b,n,i,na;
    scanf("%d %d %d",&a,&b,&n);
    na = a%b;
    for(i=1;i<=n;i++) {

            arr[i] = na*10 / b;
            na = na*10 % b;
    }
    printf("%d",arr[n]);
    return 0;
}
