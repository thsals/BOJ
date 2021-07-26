#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct data {
    int a,b,c;
};
bool cmp(data l, data r) {
    if(l.b<r.b) {
        return true;
    }
    else if(l.b==r.b)
    {
        if(l.a<r.a) {  return true;}
        else if(l.a == r.a) {
            if(l.c<r.c) {
                return true;
            }
        }
    }
    return false;
}

int truck[10001];

int hamsu1(int s,int e){
    int res=0;
    for(int i=s;i<e;i++){
        res=max(res,truck[i]);
    }
    return res;
}

void hamsu2(int s,int e, int value){
    for(int i=s;i<e;i++){
        truck[i]+=value;
    }
}
int main()
{
    int i,j,n,c,m;
    int max1=0,sum=0,sum1=0,num=1,num1=10001;
    struct data a[10001];
    //freopen("input.txt","r",stdin);
    scanf("%d %d %d",&n,&c,&m);
    for(i=0;i<m;i++) {
        scanf("%d %d %d",&a[i].a,&a[i].b,&a[i].c);
    }
    sort(a,a+m,cmp);
    int res=0;
    for(i=0;i<m;i++){
        int start = a[i].a,end = a[i].b,val = a[i].c;
        int maxval = hamsu1(start,end);
        int emptyval = c - maxval;
        int sendval = min(emptyval, val);
        res+=sendval;
        hamsu2(start,end,sendval);

    }
    printf("%d",res);
    return 0;
}
