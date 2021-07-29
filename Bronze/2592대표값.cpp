#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int num[10],i,avg,sum=0,bin[2] = {0,},arr[100] = {0,};
    for(i=0;i<10;i++) {
        scanf("%d",&num[i]);
        sum = sum + num[i];
        arr[num[i]/10]++;
    }
    avg= sum/10;
    for(i=0;i<100;i++) {
        if(arr[i]>bin[1]) {
            bin[0] = i*10;
            bin[1] = arr[i];
        }
    }
    printf("%d\n%d",avg,bin[0]);
    return 0;
}
