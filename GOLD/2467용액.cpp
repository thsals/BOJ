#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int a[100010],b[100010] = {0,};

int mindata = 2000000000;
int main()
{
    int n,i;
    int res1,res2;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k=n-1;
    int l=0;
    while (l<k) {
        if(a[l] + a[k] > 0){
            if(mindata>abs(a[l]+a[k])) {
                res1 =a[l];
                res2 = a[k];
                mindata = abs(a[l] + a[k]);
            }
            k--;
        }
        else {

            if(mindata > abs(a[l]+a[k])) {
                res1 =a[l];
                res2 = a[k];
                mindata = abs(a[l] + a[k]);
            }
            l++;
        }
        
    }
    printf("%d %d",res1,res2);
    return 0;
}
