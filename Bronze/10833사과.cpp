#include <iostream>
#include <stdio.h>
using namespace std;

struct aa {
    int x , y;
};

int main()
{
    int i,sch,add=0;
    scanf("%d",&sch);
    struct aa a[101];
    for(i=0;i<sch;i++) {
        scanf("%d %d",&a[i].x,&a[i].y);
    }
    for(i=0;i<sch;i++) {
        add = add + (a[i].y % a[i].x);
    }
    printf("%d",add);
    return 0;
}
