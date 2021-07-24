#include <iostream>
#include <stdio.h>
using namespace std;
long long n,len[1000001],ga[1000001],min1=1000000001;
int main()
{
    int i;
    long long sum=0;
    scanf("%lld",&n);
    for(i=0;i<n-1;i++) {
        scanf("%lld",&len[i]);
    }
    for(i=0;i<n;i++) {
        scanf("%lld",&ga[i]);
    }
    sum = len[0] * ga[0];
    min1 = ga[0];
    for(i=1;i<n-1;i++) {
       if(ga[i] < min1) {
            min1 = ga[i];
       }
       sum = sum + min1 * len[i];
    }
    printf("%lld",sum);
    return 0;
}
