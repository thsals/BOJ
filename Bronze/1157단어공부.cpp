#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int cnt[1000001];
char a[1000001];
bool cmp(int l,int r) {
    if(r<l) {
        return true;
    }
    else return false;
}
int main()
{
    int i=0,len,max1=0,o=0,n1=0,n2=0;

    scanf("%s",&a);
    memset(cnt,0,sizeof(cnt));
    len = strlen(a);
    for(i=0;i<len;i++) {
        if(islower(a[i])) {
            a[i] = toupper(a[i]);
        }
    }
    for(i=0;i<len;i++) {
        cnt[a[i]]++;
        if(a[i] > max1) {
            max1 = a[i];
        }
        if(cnt[a[i]] > n1) {
            n1 = cnt[a[i]];
        }
    }
    for(i=65;i<=max1;i++) {
        if(cnt[i] == n1) {
            if(n2  == 0) {
                n2 = i;
            }
            else o=1;
        }
    }

    if(o == 1) {
        printf("?");
    }
    else printf("%c",n2);
    return 0;
}
