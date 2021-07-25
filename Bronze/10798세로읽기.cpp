#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct data {
    char a[15];
};

int main()
{
    char b[80] = { };
    struct data a[5];
    int i,j,k=0,sum=0;
    memset(a,0,sizeof(a));
    for(i=0;i<5;i++) {
        scanf("%s",a[i].a);
    }
    for(i=0;i<15;i++) {
        for(j=0;j<5;j++) {
            if (a[j].a[i] != 0 ) {

                printf("%c",a[j].a[i]);
            }
        }
    }

    return 0;
}
