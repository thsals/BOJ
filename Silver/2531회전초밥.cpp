#include <iostream>
#include <stdio.h>
using namespace std;
long long arr[30011],visit[3011]={0,},n,s,p,c,cnt=1,max1 = 0,l,r;

int main()
{
    int i;
   // freopen("a.txt","r",stdin);
    scanf("%lld %lld %lld %lld",&n,&s,&p,&c);
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    l  = 0;
    r  = p-1;
    visit[c]++;
    for(i=0;i<p;i++) {
        if(visit[arr[i]] == 0) {
            cnt++;
        }
        visit[arr[i]]++;
    }
    max1 = cnt;
    while(1) {
        r++;

        if(visit[arr[r%n]] == 0) {
            cnt++;
        }
        visit[arr[r%n]]++;
        visit[arr[l%n]]--;
        if(visit[arr[l%n]] == 0) {
            cnt--;
        }
        l++;
        if(max1 < cnt) {
            max1 = cnt;
        }

        if(l == n) {
            break;
        }
    }
    printf("%lld",max1);
    return 0;
}
