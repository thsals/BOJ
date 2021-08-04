#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
    long n,i,strn=0,sum=2;
    char arr[5];
    
    while(1) {
        scanf("%s",arr);
        
        strn = strlen(arr);
        if(strn==1 && arr[0] == 48) break;
        for(i=0;i<strn;i++) {
            if(arr[i] == 49) {
                sum+=2;
            }
            else if(arr[i] == 48) {
                sum+=4;
            }
            else {
                sum+=3;
            }
        }
        printf("%ld\n",sum+strn-1);
        sum=2;
    }
    return 0;
 }
