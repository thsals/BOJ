#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int aa(int n) {
    int sum = 0;
    while(n!=0) {
        sum = sum + n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int i,j,n,a;
    scanf("%d",&n);
    int cnt = 0;
    for(i=1;i<=n;i++) {
        a = aa(i);
        if (i % a == 0) {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}

