#include <iostream>
#include <stdio.h>
using namespace std;

int data(int num) {
    int num1=0;
    while (1) {
        if(num==0) break;

        if(num%10==3||num%10==6||num%10==9) {
            num1++;
        }
        num = num/10;
    }
    return num1;
}

int main()
{
    int i,n,cnt=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        cnt+=data(i);
    }
    printf("%d",cnt);
    return 0;
}

