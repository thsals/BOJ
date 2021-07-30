#include <iostream>
#include <stdio.h>
using namespace std;
int prime[10010]={1,1};
void hamsu () {
    int i,j;
    for(i=2;i<=10000;i++) {
        if(prime[i] == 1) continue;
        for(j=i+i;j<=10000;j+=i) {
            prime[j] = 1;
        }
    }
}
 
int main()
{
    int n,m,k,sum=0,min1=10000;
    scanf("%d %d",&m,&n);
    hamsu();
    for(k=m;k<=n;k++) {
            if(prime[k] == 0) {
                sum = sum+k;
                if(k< min1) {
                    min1 = k;
                }
            }
 
    }
    if(sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d",sum,min1);
    }
    return 0;
}
