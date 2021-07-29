#include <iostream>
#include <stdio.h>
using namespace std;
struct data {
    char s;
    int g;
};
int main()
{
    int i=0,j=0,n,k=0;
    char b[12] = {'A','B','C','D','E','F','G','H','I','J','K','L'};
    struct data a[60];
    scanf("%d",&n);
    for(i=0;i<60;i++) {
        if(j==10) {
            j=0;
        }
        a[i].g = j;
        j++;

        a[i].s = b[k];
        k++;
        if(k==12) {
            k=0;
        }
    }
    int n1 = (n-4 + 60)%60;
    printf("%c%d",a[n1].s,a[n1].g);
    return 0;
}
