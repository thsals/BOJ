#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;




char a[30][100010];

bool hamsu(char arr[]) {
    int len = strlen(arr);
    int l, r;
    l = 0;
    r = len -1;
    while(l<r) {
        if(arr[l] != arr[r]) {
            return false;

        }
        l++;
        r--;
    }
    return true;
}
bool right(char arr[]) {
    int len = strlen(arr);
    int l, r;
    l = 0;
    r = len -1;
    int cnt=0;
    while(l<r) {
        if(arr[l] != arr[r]) {
            cnt++;
            r--;
        }
        else{
            l++;
            r--;
        }
    }
    if(cnt>1) {
        return false;
    }
    return true;
}

bool left(char arr[]) {
    int len = strlen(arr);
    int l, r;
    l = 0;
    r = len -1;
    int cnt=0;
    while(l<r) {
        if(arr[l] != arr[r]) {
            cnt++;
            l++;
        }
        else{
            l++;
            r--;
        }
    }
    if(cnt>1) {
        return false;
    }
    return true;
}

int main()
{
    int t,i,len;

    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%s",a[i]);
    }
    for(i=0;i<t;i++) {
        len = strlen(a[i]);
        if(hamsu(a[i]) == 1) {
            printf("0\n");
        }
        else if (left(a[i]) == 1 || right(a[i]) == 1) {
            printf("1\n");
        }
        else printf("2\n");
    }
    return 0;
}
