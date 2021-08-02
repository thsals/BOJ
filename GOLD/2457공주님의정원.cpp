#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct data {
    int a,b,c,d;
};
bool cmp(data l,data r) {
    if(l.a < r.a) {
        return true;
    }
    else if (l.a == r.a) {
        if(l.b < r.b) {
            return true;
        }
        else if(l.b==r.b) {
            if(l.c < r.c) {
                return true;
            }
            else if(l.c == r.c) {
                if(l.d < r.d) {
                    return true;
                }

            }

        }
    }
    return false;
}
int main()
{
    int n,i,cnt=1,st,la,check[2] = {0,};
    struct data a[100001];
    //freopen("a.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d %d %d %d",&a[i].a,&a[i].b,&a[i].c,&a[i].d);

    }
    sort(a,a+n,cmp);
    st = 301;
    la = 301;
    for(i=0;i<n;i++) {

        if(a[i].a*100 + a[i].b <= st) {
            if(a[i].c*100 + a[i].d > la) {
                la= a[i].c*100 + a[i].d;
                check[0] = 1;
            }
        }
        //printf("%d %d\n",st,la);
        if(a[i+1].a*100 + a[i+1].b > st && a[i+1].c*100 + a[i+1].d > la) {
            st = la;
            if(la > 1130) {
                break;
                check[1] = 1;
            }
            cnt++;
        }



    }
    if(la > 1130) {
        check[1] = 1;
    }
    if(check[0]==1 && check[1] == 1) {
        printf("%d",cnt);
    }
    else printf("0");

    return 0;
}
