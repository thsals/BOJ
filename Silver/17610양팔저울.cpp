#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int arr[2600000]={1};
int tmp[2600000] = {1};
int main()
{
    int k,num[13],i,j,sum=0,max1=0;
    scanf("%d",&k);
    for(i=0;i<k;i++) {
        scanf("%d",&num[i]);
        sum = sum+num[i];
        if(num[i] > max1) {
            max1 = num[i];
        }
    }
    
    for(i=0;i<k;i++)
    {
        for(j=0;j<=sum;j++)
        {
            if(arr[j]==0) continue;
            tmp[j+num[i]]=1;
            tmp[abs(j-num[i])]=1;
        }
        for(j=0;j<=sum;j++)
        {
            arr[j]=tmp[j];
        }
    }

    int cnt=0;
    for(i=0;i<=sum;i++) {
        if(arr[i] == 0) {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
