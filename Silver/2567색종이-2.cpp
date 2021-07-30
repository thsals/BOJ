#include <iostream>
#include <stdio.h>
using namespace std;
struct data {
    int a,b;
};

int main()
{
    long long n,i,j,k,arr[119][119],num=1,maxy=0,maxx=0,cnt=0;
    struct data a[110];

    scanf("%lld",&n);

    for(i=0;i<n;i++) {
        scanf("%lld %lld",&a[i].a,&a[i].b);
        for(j=0;j<10;j++) {
            for(k=0;k<10;k++) {
                arr[a[i].a+k][a[i].b+j] = num;
                arr[a[i].a+j][a[i].b+k] = num;
            }
        }
        num++;
        if(a[i].a + 10 > maxy) {
            maxy = a[i].a+10;
        }
        if(a[i].b + 10 > maxx) {
            maxx = a[i].b+10;
        }
    }
    for(i=1;i<=maxy;i++) {
        for(j=1;j<=maxx;j++) {
            if(arr[i][j] != 0) {
                if(arr[i][j+1] == 0) {
                    cnt++;
                    //arr[i][j] = 9;
                }
                if (arr[i+1][j] == 0) {
                    cnt++;//arr[i][j] = 9;
                }
                if (arr[i][j-1] == 0) {
                    cnt++;//arr[i][j] = 9;
                }
                if (arr[i-1][j] == 0) {
                    cnt++;//arr[i][j] = 9;
                }
            }
        }
    }

    printf("%lld",cnt);
    return 0;
}
