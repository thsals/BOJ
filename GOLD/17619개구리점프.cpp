#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct data{
    int a,b,c;
    int num;
};
struct que{
    int a,b;
};
bool cmp(data r, data l) {
    if(r.a < l.a) {
        return true;

    }
    else if(r.a == l.a) {
        if(r.b < l.b) {
            return true;
        }

    }

    return false;

}
long long check[100001] = {-1,};
struct data a[100001];
struct que b[100001];
int n,q,group=0,maxx=0;
int main()
{
    int i;
    scanf("%d %d",&n,&q);

    for(i=0;i<n;i++ ){
        scanf("%d %d %d",&a[i].a,&a[i].b,&a[i].c);
        a[i].num=i;
    }
    for(i=0;i<q;i++) {
        scanf("%d %d",&b[i].a,&b[i].b);
    }
    sort(a,a+n,cmp);
    check[0] = group;
    maxx = a[0].b;
    for(i=1;i<n;i++) {

        if(a[i].a <= maxx) {
            check[a[i].num] = group;
        }
        else {
            group++;
            check[a[i].num] = group;
        }
        maxx = max(maxx,a[i].b);
    }
    for(i=0;i<q;i++) {
        if(check[b[i].a-1] == check[b[i].b-1]) {
            printf("1\n");
        }
        else printf("0\n");
    }
    return 0;
}
