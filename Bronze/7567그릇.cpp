#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char a[51];
    int i,j,len,le=10;
    scanf("%s",a);
    len = strlen(a);
    for(i=0;i<len-1;i++) {
        if(a[i] == a[i+1]) {
            le = le+5;
        }
        else {
            le = le+10;
        }
    }
    printf("%d",le);
    return 0;
}
