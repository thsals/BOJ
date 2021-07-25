#include <iostream>
#include <stdio.h>
using namespace std;

struct data {
    int s,gra;
};

int main()
{
    int room=0,i,j,stu,maxstu;
    scanf("%d %d",&stu,&maxstu);
    int all[2][6] = {0,};
    struct data a[1001];
    for(i=0;i<stu;i++) {
        scanf("%d %d",&a[i].s,&a[i].gra);
    }
    for(i=0;i<stu;i++) {
        all[a[i].s][a[i].gra-1]++;
    }
    for(i=0;i<2;i++) {
        for(j=0;j<6;j++){
            if( 0 < all[i][j] && all[i][j] <= maxstu) {
                room++;
            }
            else if (maxstu < all[i][j]) {
                if(all[i][j] % maxstu == 0) {
                    room = room + (all[i][j] / maxstu);
                }
                else {
                    room = room + (all[i][j] / maxstu +1);
                }
            }
        }
    }
    printf("%d",room);
    return 0;
}
