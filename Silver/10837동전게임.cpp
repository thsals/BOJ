#include <iostream>
#include <stdio.h>
using namespace std;
struct data {
    int a,b;
};
int main()
{
    int k,c,i;
    struct data a[100001];
    scanf("%d %d",&k,&c);
    for(i=0;i<c;i++) {
        scanf("%d %d",&a[i].a,&a[i].b);
    }
    for(i=0;i<c;i++) {
        if(a[i].a > a[i].b) {
            if(a[i].a>=a[i].b && a[i].a - (k -a[i].a)-a[i].b>2)  {
                printf("0\n");
            }
            else if (a[i].a<a[i].b && a[i].b - (k-a[i].a)-a[i].a >1) {
                printf("0\n");
            }
            else  {
                printf("1\n");
            }
        }
        else {
            if(a[i].a>=a[i].b && a[i].a-(k-a[i].b)-a[i].b>2)  {
                printf("0\n");
            }
            else if (a[i].a<a[i].b && a[i].b - (k-a[i].b)-a[i].a >1) {
                printf("0\n");
            }
            else {
                printf("1\n");
            }
        }
    }
    return 0;
}
