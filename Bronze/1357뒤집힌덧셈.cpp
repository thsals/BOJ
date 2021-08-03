#include <iostream>
#include <stdio.h>
using namespace std;
int arr[5];
int rev(int a) {
    int o=0;
    while(a)
    {
        o=o*10 + a%10;
        a/=10;
    }
    /*int o,i,b=1,res[5] = {0,};

    for(i=0;i<3;i++) {
        o=a;
        o = o / b;
        b= b*10;
        o = o%10;
        res[i] = o;
    }
    b=1;
    o=0;
    for(i=2;i>=0;i--) {
        o=res[i]*b+o;
        b=b*10;
    }
    */
    return o;
}
int main()
{
    int n,n1,rn,rn1,sum,len;
    scanf("%d %d",&n,&n1);
    rn = rev(n);
    rn1 = rev(n1);
    sum = rn + rn1;
    printf("%d",rev(sum));
    return 0;
}
