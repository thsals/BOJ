#include <iostream>
#include <stdio.h>
using namespace std;
int n[1001][4];

int main()
{
    int cn,k,i,j,a=1,b;

    scanf("%d %d",&cn,&k);

    for(i=0;i<cn;i++) {
        for(j=0;j<4;j++){
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<cn;i++) {
        if(n[i][0] == k) {
            b=i;
        }
    }
    for(j=0;j<cn;j++) {
        if(n[b][1]<n[j][1]) {
                a++;
        }
        else if(n[b][1] == n[j][1] && n[b][2] < n[j][2]) {
                a++;
        }
        else if(n[b][1] == n[j][1] && n[b][2] == n[j][2] && n[b][3] < n[j][3]) {
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
