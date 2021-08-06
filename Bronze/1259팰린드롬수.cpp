#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int i,n,cnt=0,len=0,s,l,o=0;
    char arr[7];
    while(1) {

        scanf("%s",arr);
        if(strcmp(arr,"0") == 0) break;
        len = strlen(arr);
        s=0;
        l = len-1;
        for(i=0;i<len;i++) {
            if(arr[s] != arr[l]) {
                o=1;
            }
            s++;l--;

        }
        if(o == 1) {
            printf("no\n");
        }
        else {
            printf("yes\n");
        }
        o=0;
    }

    return 0;
}
