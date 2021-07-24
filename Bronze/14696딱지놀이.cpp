#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct data {
    int a,d[101];
    int b,dd[101];
    int acnt4,acnt3,acnt2,acnt1;
    int bcnt4,bcnt3,bcnt2,bcnt1;
};

int main()
{
    int i,j,imsi,round;
    scanf("%d",&round);
    struct data a[1001];
    for(i=0;i<round;i++) {
        scanf("%d",&a[i].a);
        a[i].acnt4=0,a[i].acnt3=0,a[i].acnt2=0,a[i].acnt1=0;
        a[i].bcnt4=0,a[i].bcnt3=0,a[i].bcnt2=0,a[i].bcnt1=0;
        for(j=0;j<a[i].a;j++) {
            scanf("%d",&a[i].d[j]);
            if(a[i].d[j] == 4) {
                a[i].acnt4++;
            }
            else if (a[i].d[j] ==3 ) {
                a[i].acnt3++;
            }

            else if (a[i].d[j] ==2) {
                a[i].acnt2++;
            }
            else if (a[i].d[j] == 1) {
                a[i].acnt1++;
            }
        }
        scanf("%d",&a[i].b);
        for(j=0;j<a[i].b;j++) {
            scanf("%d",&a[i].dd[j]);
            if(a[i].dd[j] ==4) {
                a[i].bcnt4++;
            }
            else if (a[i].dd[j] ==3 ) {
                a[i].bcnt3++;
            }

            else if (a[i].dd[j] ==2) {
                a[i].bcnt2++;
            }
            else if (a[i].dd[j] == 1) {
                a[i].bcnt1++;
            }
        }
    }
    for(i=0;i<round;i++) {
       if(a[i].acnt4 > a[i].bcnt4) {
        printf("A\n");
       }
       else if(a[i].acnt4 < a[i].bcnt4) {
        printf("B\n");
       }
       else {
            if(a[i].acnt3 > a[i].bcnt3) {
                printf("A\n");
            }
            else if (a[i].acnt3 < a[i].bcnt3) {
                printf("B\n");
            }
            else if (a[i].acnt3 == a[i].bcnt3) {
                    if(a[i].acnt2 > a[i].bcnt2) {
                        printf("A\n");
                    }
                    else if (a[i].acnt2 < a[i].bcnt2) {
                        printf("B\n");
                    }
                    else if (a[i].acnt2 == a[i].bcnt2) {
                            if(a[i].acnt2 > a[i].bcnt2) {
                                printf("A\n");
                            }
                            else if (a[i].acnt2 < a[i].bcnt2) {
                                printf("B\n");
                            }
                            else if (a[i].acnt2 == a[i].bcnt2) {
                                    if(a[i].acnt1 > a[i].bcnt1) {
                                        printf("A\n");
                                    }
                                    else if (a[i].acnt1 < a[i].bcnt1) {
                                        printf("B\n");
                                    }
                                    else if (a[i].acnt1 == a[i].bcnt1) {
                                            printf("D\n");
                                    }
                            }
                    }
            }
       }
    }
    return 0;
}
