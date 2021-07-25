#include <iostream>
#include <stdio.h>
using namespace std;
struct data {
    int a,b,c;
};
int main()
{
    int i,j,m,n1=0,cnt=0;

    long long n3=1;
    struct data a[1001];
    //freopen("input.txt","r",stdin);
    scanf("%d",&m);
    for(i=0;i<m;i++) {
        scanf("%d %d %d",&a[i].a,&a[i].b,&a[i].c);
    }
    for(i=0;i<m;i++) {
        n3 = (n3 * a[i].b) / a[i].a;
    }
    for(i=0;i<m;i++) {
        if(a[i].c >0) {
            cnt++;
        }
    }
    if(cnt % 2 == 0) {
        n1 = 0;
    }
    else {
        n1 =1;
    }

    printf("%d %lld",n1,n3);
    return 0;
}
